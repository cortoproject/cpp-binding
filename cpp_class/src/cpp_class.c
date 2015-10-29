/*
 * cpp_class.c
 *
 *  Created on: Dec 21, 2012
 *      Author: sander
 */

#include "corto.h"
#include "cpp_class.h"
#include "cpp_common.h"

static corto_string cpp_escapeName(corto_string fullname, corto_id escaped) {
    corto_char *ptr, *bptr, ch;

    ptr = fullname;
    bptr = escaped;

    while((ch = *ptr)) {
        if(ch == ':') {
            *bptr = '_';
            ptr++;
        }else {
            *bptr = ch;
        }
        bptr++;
        ptr++;
    }
    *bptr = '\0';

    return escaped;
}

static int cpp_headerWalk(corto_object o, void* userData) {
    /* Add types of parameters and returntypes to list */
    if(corto_class_instanceof(corto_procedure_o, corto_typeof(o))) {
        corto_uint32 i;
        corto_parameter *p;
        for(i=0; i<corto_function(o)->parameters.length; i++) {
            p = &corto_function(o)->parameters.buffer[i];
            if(!corto_llHasObject(userData, p->type) && (corto_class_instanceof(corto_interface_o, p->type) && p->type->reference)) {
                corto_llInsert(userData, p->type);
            }
        }
        if(!corto_llHasObject(userData, corto_function(o)->returnType) && (corto_class_instanceof(corto_interface_o, corto_function(o)->returnType) && corto_function(o)->returnType->reference)) {
            corto_llInsert(userData, corto_function(o)->returnType);
        }
    }
    return 1;
}

static g_file cpp_headerOpen(corto_interface o, corto_generator g) {
    g_file result;
    corto_id fullname, path, id, mkpath;
    corto_id escaped, headerFileName;
    corto_ll headers;

    headers = corto_llNew();

    /* Get filename */
    corto_fullname(o, fullname);
    cpp_escapeName(fullname, escaped);
    cpp_topath(g_getCurrent(g), path);

    sprintf(mkpath, "include/%s", path);
    corto_mkdir(mkpath);

    if(strlen(path)) {
        sprintf(headerFileName, "include/%s/%s.hpp", path, g_oid(g, o, id));
    }else {
        sprintf(headerFileName, "include/%s.hpp", g_oid(g, o, id));
    }

    result = g_fileOpen(g, headerFileName);
    if(!result) {
        corto_seterr("failed to open file '%s'", headerFileName);
    }else {

        /* Print standard comments and includes */
        g_fileWrite(result, "/* %s\n", headerFileName);
        g_fileWrite(result, " *\n");
        g_fileWrite(result, " *  Generated on %s\n", __DATE__);
        g_fileWrite(result, " *    C++ definitions for %s.\n", fullname);
        g_fileWrite(result, " *    This file contains generated code. Do not modify!\n");
        g_fileWrite(result, " */\n\n");
        g_fileWrite(result, "#ifndef %s_H\n", escaped+1);
        g_fileWrite(result, "#define %s_H\n\n", escaped+1);
        g_fileWrite(result, "#include \"%s/_type.hpp\"\n", path);

        /* If there is a base-class, include that file too. */
        if(corto_class_instanceof(corto_struct_o, o)) {
            if(corto_interface(o)->base) {
                corto_llAppend(headers, corto_interface(o)->base);
            }else {
                g_fileWrite(result, "#include \"corto/lang/Object.hpp\"\n");
            }
        }

        /* Include implemented interfaces */
        if(corto_class_instanceof(corto_class_o, o)) {
            corto_uint32 i;
            corto_interface abstract;
            for(i=0; i<corto_class(o)->implements.length; i++) {\
                abstract = corto_class(o)->implements.buffer[i];
                corto_llAppend(headers, abstract);
            }
        }

        /* Print headers */
        {
            corto_iter includeIter;
            includeIter = corto_llIter(headers);
            while(corto_iterHasNext(&includeIter)) {
                corto_object include = corto_iterNext(&includeIter);

                if(include != o) {
                    cpp_topath(corto_parentof(include), path);
                    g_fileWrite(result, "#include \"%s/%s.hpp\"\n", path, g_oid(g, include, id));
                }
            }
        }

        /* Print forward declarations for classes from parameters and returnTypes */
        corto_llFree(headers); headers = corto_llNew();
        corto_scopeWalk(o, cpp_headerWalk, headers);
        {
            corto_iter fwdIter;
            fwdIter = corto_llIter(headers);
            while(corto_iterHasNext(&fwdIter)) {
                corto_object fwd = corto_iterNext(&fwdIter);

                if(fwd != o) {
                    cpp_openScope(result, fwd);
                    g_fileWrite(result, "class %s;\n", g_oid(g, fwd, id));
                }
            }
        }
        cpp_closeScope(result);

        corto_llFree(headers);
        g_fileWrite(result, "\n");
    }

    return result;
}

static void cpp_headerClose(corto_interface class, g_file file) {
    CORTO_UNUSED(class);
    g_fileWrite(file, "\n");
    g_fileWrite(file, "#endif\n\n");
}

typedef struct cpp_scopeWalk_t {
    corto_generator g;
    g_file file;
    corto_bool methods;
    corto_bool members;
}cpp_scopeWalk_t;

/* Function declaration */
void cpp_functionDeclExt(corto_generator g, g_file file, corto_function o, corto_bool inlined, corto_bool virtualStub) {
    corto_id oid, id;
    corto_uint32 i;
    corto_bool callback;
    corto_parameter* p;

    callback = FALSE;

    if(inlined) {
        // g_fileWrite(file, "public: ");
    }

    /* Callback functions are static as well as non-member functions in a class-scope */
    if(corto_procedure(corto_typeof(o))->kind == CORTO_FUNCTION) {
        if(inlined) {
            if(corto_class_instanceof(corto_interface_o, corto_typeof(corto_parentof(o)))) {
                g_fileWrite(file, "static ");
            }
        }
        callback = TRUE;
    }

    /* Function return-types are always return by value, including classes */
    g_fileWrite(file, "%s ", cpp_specifierId(g, corto_function(o)->returnType, oid));

    if(!inlined && corto_class_instanceof(corto_interface_o, corto_parentof(o))) {
        g_fileWrite(file, "%s::", g_oid(g, corto_parentof(o), id));
    }

    if(!virtualStub) {
        g_fileWrite(file, "%s(", cpp_procId(g, o, id));
    }else {
        g_fileWrite(file, "%s_v(", cpp_procId(g, o, id));
    }

    for(i=0; i<corto_function(o)->parameters.length; i++) {
        corto_id specifier;

        if(i) {
            g_fileWrite(file, ", ");
        }
        p = &corto_function(o)->parameters.buffer[i];

        if(p->type->reference) {
            g_fileWrite(file, "const ");
        }

        cpp_specifierId(g, p->type, specifier);

        g_fileWrite(file, "%s ",
                specifier);

        if(p->type->reference) {
            g_fileWrite(file, "&");
        }

        g_fileWrite(file, "%s",
                g_id(g, p->name, id));
    }

    g_fileWrite(file, ")");
}

/* Function declaration */
void cpp_functionDecl(corto_generator g, g_file file, corto_function o, corto_bool inlined) {
    cpp_functionDeclExt(g, file, o, inlined, FALSE);
}

typedef struct cpp_member_t {
    corto_generator g;
    g_file file;
    corto_uint32 count;
    corto_ll memberCache;
}cpp_member_t;

static corto_int16 cpp_onMember(corto_serializer s, corto_value* v, void* userData) {
    corto_member m;
    cpp_member_t* data;

    data = userData;
    CORTO_UNUSED(s);

    /* Get member */
    if(v->kind == CORTO_MEMBER) {
        corto_id spec, member;
        m = v->is.member.t;

        if(data->count) {
            g_fileWrite(data->file, ",\n");
            g_fileWrite(data->file, "       ");
        }
        cpp_specifierId(data->g, m->type, spec);

        g_fileWrite(data->file, "%s%s %s%s",
                m->type->reference ? "const " : "",
                spec,
                m->type->reference ? "&" : "",
                corto_genMemberName(data->g, data->memberCache, m, member));
        data->count++;
    }else {
        corto_serializeMembers(s, v, userData);
    }

    return 0;
}

static corto_int16 cpp_onMemberCount(corto_serializer s, corto_value* v, void* userData) {
    CORTO_UNUSED(s);
    CORTO_UNUSED(v);
    (*(corto_uint32*)userData)++;
    return 0;
}

static struct corto_serializer_s cpp_memberSerializer(void) {
    struct corto_serializer_s result;
    corto_serializerInit(&result);
    result.access = CORTO_LOCAL|CORTO_PRIVATE;
    result.accessKind = CORTO_NOT;
    result.traceKind = CORTO_SERIALIZER_TRACE_ON_FAIL;
    result.metaprogram[CORTO_MEMBER] = cpp_onMember;
    return result;
}

struct corto_serializer_s cpp_memberCountSerializer(void) {
    struct corto_serializer_s result;
    corto_serializerInit(&result);
    result.access = CORTO_LOCAL|CORTO_PRIVATE;
    result.accessKind = CORTO_NOT;
    result.traceKind = CORTO_SERIALIZER_TRACE_ON_FAIL;
    result.metaprogram[CORTO_MEMBER] = cpp_onMemberCount;
    return result;
}

/* Constructor */
void cpp_constructorDecl(corto_generator g, g_file file, corto_interface o, corto_bool inlined) {
    corto_id id;
    cpp_member_t walkData;
    struct corto_serializer_s s;

    if(inlined) {
        // g_fileWrite(file, "public: ");
    }

    if(!inlined) {
        g_fileWrite(file, "%s::", g_oid(g, o, id));
    }

    walkData.memberCache = corto_genMemberCacheBuild(o);

    g_fileWrite(file, "%s(", g_oid(g, o, id));
    walkData.g = g;
    walkData.file = file;
    walkData.count = 0;
    s = cpp_memberSerializer();
    corto_metaWalk(&s, corto_type(o), &walkData);

    corto_genMemberCacheClean(walkData.memberCache);

    g_fileWrite(file, ")");
}

/* Scoped constructor */
void cpp_constructorScopedDecl(corto_generator g, g_file file, corto_interface o, corto_bool inlined) {
    corto_id id;
    cpp_member_t walkData;
    struct corto_serializer_s s;

    if(inlined) {
        // g_fileWrite(file, "public: ");
    }

    if(!inlined) {
        g_fileWrite(file, "%s::", g_oid(g, o, id));
    }

    walkData.memberCache = corto_genMemberCacheBuild(o);

    g_fileWrite(file, "%s(corto::lang::Object *_parent,\n", g_oid(g, o, id));
    g_fileWrite(file, "       std::string _name");
    walkData.g = g;
    walkData.file = file;
    walkData.count = 2;
    s = cpp_memberSerializer();
    corto_metaWalk(&s, corto_type(o), &walkData);

    corto_genMemberCacheClean(walkData.memberCache);

    g_fileWrite(file, ")");
}

/* Getter declaration */
void cpp_memberGetter(corto_generator g, g_file file, corto_member o, corto_bool inlined) {
    corto_id typeId, memberId;

    if(inlined) {
        //g_fileWrite(file, "public: ");
    }
    g_fileWrite(file, "%s ",
            cpp_specifierId(g, corto_member(o)->type, typeId));

    if(!inlined) {
        corto_id id;
        g_fileWrite(file, "%s::",
                g_oid(g, corto_parentof(o), id));
    }
    g_fileWrite(file, "%s()",
            g_id(g, corto_nameof(o), memberId));
}

/* Setter declaration */
void cpp_memberSetter(corto_generator g, g_file file, corto_member o, corto_bool inlined) {
    corto_id typeId, memberId;

    if(inlined) {
        //g_fileWrite(file, "public: ");
    }
    g_fileWrite(file, "void ");

    if(!inlined) {
        corto_id id;
        g_fileWrite(file, "%s::",
                g_oid(g, corto_parentof(o), id));
    }
    g_fileWrite(file, "%s(%s%s ",
            g_id(g, corto_nameof(o), memberId),
            o->type->reference ? "const " : "",
            cpp_specifierId(g, corto_member(o)->type, typeId));

    if(o->type->reference) {
        g_fileWrite(file, "&");
    }

    g_fileWrite(file, "v)");
}

/* Walk scope of a class, process members and\or methods. */
static int cpp_scopeWalk(corto_object o, void* userData) {
    cpp_scopeWalk_t* data;
    data = userData;

    /* Check if o is a member */
    if(corto_class_instanceof(corto_member_o, o)) {
        if(data->members) {
            g_fileWrite(data->file, "\n");
            g_fileWrite(data->file, "// %s\n", corto_nameof(o));

            /* Getter */
            cpp_memberGetter(data->g, data->file, o, TRUE);
            g_fileWrite(data->file, ";\n");

            /* Setter */
            cpp_memberSetter(data->g, data->file, o, TRUE);
            g_fileWrite(data->file, ";\n");
        }

    }/* Else, check if o is a procedure */
    else if(corto_class_instanceof(corto_procedure_o, corto_typeof(o)) && (corto_procedure(corto_typeof(o))->kind != CORTO_METAPROCEDURE)) {
        if(data->methods) {
            if(!corto_checkState(o, CORTO_DEFINED)) {
                g_fileWrite(data->file, "\n");
                g_fileWrite(data->file, "// %s\n", corto_nameof(o));
                cpp_functionDecl(data->g, data->file, corto_function(o), TRUE);
                g_fileWrite(data->file, ";\n");

                if(corto_instanceof(corto_type(corto_method_o), o)) {
                    if(corto_method(o)->_virtual) {
                        /* Generate extra header for virtual method implementation */
                        cpp_functionDeclExt(data->g, data->file, corto_function(o), TRUE, TRUE);
                        g_fileWrite(data->file, ";\n");
                    }
                }
            }
        }
    }

    return 1;
}

/* Process a class */
static int cpp_class(corto_interface class, corto_generator g) {
    g_file file;
    corto_id id;
    cpp_scopeWalk_t walkData;
    corto_string snippet;

    /* Create file */
    file = cpp_headerOpen(class, g);
    if (!file) {
        goto error;
    }

    /* If a header exists, write it (before opening scope) */
     if((snippet = g_fileLookupSnippet(file, "$header"))) {
         g_fileWrite(file, "/* $begin($header)");
         g_fileWrite(file, "%s", snippet);
         g_fileWrite(file, "$end */\n");
         g_fileWrite(file, "\n");
     }

    /* Open module */
    cpp_openScope(file, corto_parentof(class));

    /* Write class-definintion */
    g_fileWrite(file, "\nclass %s", g_oid(g, class, id));
    if(corto_class_instanceof(corto_struct_o, class)) {
        if(corto_interface(class)->base) {
            corto_id base;
            g_fileWrite(file, " : public %s",
                    g_fullOid(g, corto_interface(class)->base, base));
        }else {
            g_fileWrite(file, " : public corto::lang::Object");
        }
    }else {
        g_fileWrite(file, " : public corto::lang::Object");
    }

    /*if(corto_class_instanceof(corto_class_o, class)) {
        corto_uint32 i;
        corto_interface abstract;
        for(i=0; i<corto_class(class)->implements.length; i++) {
            abstract = corto_class(class)->implements.buffer[i];
            g_fileWrite(file, ", public %s", g_fullOid(g, abstract, id));
        }
    }*/

    /* Allow users to add inheritance relations to generated classes. */
    if((snippet = g_fileLookupSnippet(file, "$classinherits"))) {
        g_fileWrite(file, "/* $begin($classinherits)");
        g_fileWrite(file, "%s", snippet);
        g_fileWrite(file, "$end */\n");
    }

    g_fileWrite(file, " {\n");
    g_fileWrite(file, "public:\n");
    g_fileIndent(file);

    /* If a classheader exists, write it (before opening scope) */
     if((snippet = g_fileLookupSnippet(file, "$classheader"))) {
         g_fileWrite(file, "/* $begin($classheader)");
         g_fileWrite(file, "%s", snippet);
         g_fileWrite(file, "$end */\n");
     }

    /* Constructor (new,define) */
    g_fileWrite(file, "\n");
    g_fileWrite(file, "// Create anonymous object\n");
    cpp_constructorDecl(g, file, class, TRUE);
    g_fileWrite(file, ";\n");

    /* Scoped constructor (declare,define) */
    g_fileWrite(file, "\n");
    g_fileWrite(file, "// Create object in Corto store\n");
    cpp_constructorScopedDecl(g, file, class, TRUE);
    g_fileWrite(file, ";\n");

    /* Walk scope of class */
    walkData.g = g;
    walkData.file = file;
    walkData.members = TRUE;
    walkData.methods = FALSE;
    corto_scopeWalk(class, cpp_scopeWalk, &walkData);

    walkData.members = FALSE;
    walkData.methods = TRUE;
    corto_scopeWalk(class, cpp_scopeWalk, &walkData);

    /* Allow users to add extra operations to class-implementations. */
    if((snippet = g_fileLookupSnippet(file, "$classfooter"))) {
        g_fileWrite(file, "/* $begin($classfooter)");
        g_fileWrite(file, "%s", snippet);
        g_fileWrite(file, "$end */\n");
    }

    g_fileDedent(file);

    g_fileWrite(file, "};\n");

    cpp_closeScope(file);

    /* Close file */
    cpp_headerClose(class, file);

    return 0;
error:
    return -1;
}

static int cpp_scope(corto_object o, corto_generator g) {
    g_file file;
    cpp_scopeWalk_t walkData;
    corto_string snippet;

    /* Create file */
    file = cpp_headerOpen(o, g);

    /* If a header exists, write it (before opening scope) */
     if((snippet = g_fileLookupSnippet(file, "$header"))) {
         g_fileWrite(file, "/* $begin($header)");
         g_fileWrite(file, "%s", snippet);
         g_fileWrite(file, "$end */\n");
         g_fileWrite(file, "\n");
     }

    /* Open module */
    cpp_openScope(file, o);

    /* Walk procedures of scope */
    walkData.g = g;
    walkData.file = file;
    walkData.methods = TRUE;
    walkData.members = FALSE;
    if(!corto_scopeWalk(o, cpp_scopeWalk, &walkData)) {
        goto error;
    }

    cpp_closeScope(file);

    cpp_headerClose(o, file);

    return 0;
error:
    return -1;
}

/* Check if there are procedures in the scope of an object. */
static int cpp_checkProcedures(void* o, void* udata) {
    CORTO_UNUSED(udata);

    /* If the type of the type of the object is a procedure, return 0. */
    if(corto_class_instanceof(corto_procedure_o, corto_typeof(o))) {
        return 0;
    }
    return 1;
}

/* Walk classes */
static int cpp_implWalk(corto_object o, void* userData) {

    if(corto_class_instanceof(corto_interface_o, o) && corto_type(o)->reference) {
        if(cpp_class(corto_interface(o), userData)) {
            goto error;
        }
        if (cpp_impl(o, userData)) {
            goto error;
        }
    }else if(!corto_scopeWalk(o, cpp_checkProcedures, NULL) && (o != corto_object_o)) {
        if(cpp_scope(o, userData)) {
            goto error;
        }
        if (cpp_impl(o, userData)) {
            goto error;
        }
    }

    return 1;
error:
    return 0;
}

/* Generator main */
corto_int16 corto_genMain(corto_generator g) {

    g_setIdKind(g, CORTO_GENERATOR_ID_CLASS_UPPER);

    corto_mkdir(".corto");

    /* Walk classes */
    if(!g_walkRecursive(g, cpp_implWalk, g)) {
        goto error;
    }

    return 0;
error:
    return -1;
}
