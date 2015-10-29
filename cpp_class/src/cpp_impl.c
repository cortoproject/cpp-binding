/*
 * cpp_impl.c
 *
 *  Created on: Dec 27, 2012
 *      Author: sander
 */

#include "cpp_class.h"
#include "cpp_common.h"

typedef struct cpp_implWalk_t {
    corto_generator g;
    g_file file;
    g_file wrapper;
    corto_uint16 firstComma;
} cpp_implWalk_t;

static void cpp_implStub(corto_function o, corto_string metaFunction, cpp_implWalk_t* data) {
    corto_uint32 i;
    corto_id id;
    corto_parameter* p;
    corto_type returnType;

    /* Returnvalue */
    returnType = o->returnType;
    if((returnType->kind != CORTO_VOID) || (returnType->reference)) {
        corto_id specifier;
        g_setIdKind(data->g, CORTO_GENERATOR_ID_CLASS_LOWER);
        cpp_specifierId(data->g, returnType, specifier);
        g_fileWrite(data->file, "%s _result;\n", specifier);
        g_setIdKind(data->g, CORTO_GENERATOR_ID_CLASS_UPPER);
    }else {
        returnType = NULL;
    }

    /* Call implemented function */
    g_fileWrite(data->file, "corto_call((::corto::lang::function)(%s)", metaFunction);
    if(returnType) {
        g_fileWrite(data->file, ",&_result");
    }else {
        g_fileWrite(data->file, ",NULL");
    }
    if(corto_class_instanceof(corto_interface_o, corto_parentof(o))) {
        if(corto_procedure(corto_typeof(o))->kind != CORTO_FUNCTION) {
            g_fileWrite(data->file, ",this->__handle");
        }
    }
    for(i=0; i<o->parameters.length; i++) {
        p = &o->parameters.buffer[i];
        g_fileWrite(data->file, ",%s", g_id(data->g, p->name, id));
        if(p->type->reference) {
            g_fileWrite(data->file, "._handle()");
        }
    }
    g_fileWrite(data->file, ");\n");
    if(returnType) {
        if(corto_class_instanceof(corto_interface_o, returnType)) {
            if(corto_class_instanceof(corto_interface_o, returnType)) {
                corto_id specifier;
                cpp_specifierId(data->g, returnType, specifier);
                g_fileWrite(data->file, "%s ", specifier);
            }
            g_fileWrite(data->file, "__result(_result);\n");
            g_fileWrite(data->file, "return __result;\n");
        }else {
            g_fileWrite(data->file, "return _result;\n");
        }
    }
}

/* Generate convenience method for virtual calls */
static int cpp_implVirtual(corto_method o, cpp_implWalk_t *data) {
    corto_id id;

    g_fileWrite(data->file, "\n");
    g_fileWrite(data->file, "/* virtual %s */\n", corto_fullname(o, id));

    cpp_functionDecl(data->g, data->file, corto_function(o), FALSE);

    g_fileWrite(data->file, " {\n");
    g_fileIndent(data->file);
    g_fileWrite(data->file, "corto::lang::Class _type((corto::lang::_class)this->_typeof()._handle());\n");
    g_fileWrite(data->file, "static corto::lang::uint32 _actualMethodId;\n");
    g_fileWrite(data->file, "\n");
    g_fileWrite(data->file, "if(!_actualMethodId) {\n");
    g_fileIndent(data->file);
    g_fileWrite(data->file, "_actualMethodId = _type.resolveMethodId((corto::lang::string)\"%s\");\n", corto_nameof(o));
    g_fileDedent(data->file);
    g_fileWrite(data->file, "}\n");
    g_fileWrite(data->file, "corto::lang::Method _actualMethod = _type.resolveMethodById(_actualMethodId);\n");

    /* Insert stub code */
    cpp_implStub(corto_function(o), "(corto::lang::function)_actualMethod._handle()", data);

    g_fileDedent(data->file);
    g_fileWrite(data->file, "}\n");

    return 1;
}

/* Generate methods for class */
static int c_implProcedure(corto_object o, void* userData) {
    cpp_implWalk_t* data;
    corto_bool defined;
    corto_bool isVirtual = FALSE;

    data = userData;

    /* Only generate code for procedures */
    if(corto_class_instanceof(corto_procedure_o, corto_typeof(o)) && 
      /* TODO: Metaprocedures are not yet mapped to C++ */
      (corto_procedure(corto_typeof(o))->kind != CORTO_METAPROCEDURE)) {
        defined = corto_checkState(o, CORTO_DEFINED) && (corto_function(o)->kind != CORTO_PROCEDURE_STUB);

        if(!defined) {
            corto_string snippet;
            corto_id id;
            corto_bool isMethod = corto_instanceof(corto_type(corto_method_o), o);

            g_fileWrite(data->file, "\n");
            if(isMethod) {
                isVirtual = corto_method(o)->_virtual;
                cpp_functionDeclExt(data->g, data->file, o, FALSE, isVirtual);
            }else {
                cpp_functionDecl(data->g, data->file, o, FALSE);
            }

            g_fileWrite(data->file, " {\n");

            /* If function is defined, create stub */
            if(defined) {
                g_fileIndent(data->file);
                cpp_implStub(o, cpp_metaFullname(data->g, o, CPP_HANDLE, id), data);
                g_fileDedent(data->file);
            }else {
                g_fileWrite(data->file, "/* $begin(%s)", corto_fullname(o, id));
                g_fileIndent(data->file);

                /* Look for existing code-snippets */
                snippet = g_fileLookupSnippet(data->file, id);
                if(!snippet && !corto_function(o)->overloaded) {
                    corto_char* ptr;
                    ptr = strchr(id, '(');
                    if(ptr) {
                        *ptr = '\0';
                        /* Non-overloaded functions may have snippets without argumentlists */
                        snippet = g_fileLookupSnippet(data->file, id);
                    }else {
                        if(corto_procedure(corto_typeof(o))->kind != CORTO_OBSERVER) {
                            corto_warning("function '%s' has no argumentlist.", corto_nameof(o));
                        }
                    }
                }

                /* If snippet is not found, insert default body */
                if(!snippet) {
                    g_fileWrite(data->file, " */\n\n");
                    g_fileWrite(data->file, "/* << Insert implementation >> */\n\n");
                    g_fileDedent(data->file);
                    g_fileWrite(data->file, "/* ");

                /* Else, insert snippet */
                }else {
                    g_fileDedent(data->file);
                    g_fileWrite(data->file, "%s", snippet);
                }

                g_fileWrite(data->file, "$end */\n");
            }
            g_fileWrite(data->file, "}\n");
        }
    }

    if(isVirtual) {
        cpp_implVirtual(corto_method(o), data);
    }

    return 1;
}

typedef struct cpp_member_t {
    corto_generator g;
    g_file file;
}cpp_member_t;

static corto_int16 cpp_onMember(corto_serializer s, corto_value* v, void* userData) {
    corto_member m;
    cpp_member_t* data;
    corto_id id;

    data = userData;
    CORTO_UNUSED(s);

    /* Get member */
    if(v->kind == CORTO_MEMBER) {
        m = v->is.member.t;
        g_fileWrite(data->file, "this->%s(%s);\n",
                g_id(data->g, corto_nameof(m), id),
                id);
    }else {
        corto_serializeMembers(s, v, userData);
    }

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

static void cpp_implConstructor(corto_generator g, g_file file, corto_interface o) {
    struct corto_serializer_s s;
    cpp_member_t walkData;
    corto_object base;
    corto_id id, id2;

    if(corto_class_instanceof(corto_struct_o, o)) {
        base = corto_interface(o)->base;
        if(!base) {
            base = corto_object_o;
        }
    }else {
        base = NULL;
    }

    s = cpp_memberSerializer();

    g_fileWrite(file, "\n");
    g_fileWrite(file, "// Constructor\n");
    cpp_constructorDecl(g, file, o, FALSE);
    if(base) {
        g_fileWrite(file, " : %s((%s)NULL)", g_fullOid(g, base, id), g_fullOidExt(g, base, id2, CORTO_GENERATOR_ID_CLASS_LOWER));
    }
    g_fileWrite(file, " {\n");
    g_fileIndent(file);

    /* Create object */
    g_fileWrite(file, "this->__handle = ::corto::_new((::corto::lang::_typedef)%s);\n",
            cpp_metaFullname(g, o, CPP_HANDLE, id));

    walkData.g = g;
    walkData.file = file;
    corto_metaWalk(&s, corto_type(o), &walkData);

    /* Define object */
    g_fileWrite(file, "this->define();\n");

    g_fileDedent(file);
    g_fileWrite(file, "}\n");
}

static void cpp_implConstructorScoped(corto_generator g, g_file file, corto_interface o) {
    struct corto_serializer_s s;
    cpp_member_t walkData;
    corto_object base;
    corto_id id, id2;

    if(corto_class_instanceof(corto_struct_o, o)) {
        base = corto_interface(o)->base;
        if(!base) {
            base = corto_object_o;
        }
    }else {
        base = NULL;
    }

    s = cpp_memberSerializer();

    g_fileWrite(file, "\n");
    g_fileWrite(file, "// Constructor (declare & define)\n");
    cpp_constructorScopedDecl(g, file, o, FALSE);
    if(base) {
        g_fileWrite(file, " : %s((%s)NULL)", g_fullOid(g, base, id), g_fullOidExt(g, base, id2, CORTO_GENERATOR_ID_CLASS_LOWER));
    }
    g_fileWrite(file, " {\n");
    g_fileIndent(file);

    /* Create object */
    g_fileWrite(file, "this->__handle = ::corto::declare(_parent->_handle(), _name, (::corto::lang::_typedef)%s);\n",
            cpp_metaFullname(g, o, CPP_HANDLE, id));

    walkData.g = g;
    walkData.file = file;
    corto_metaWalk(&s, corto_type(o), &walkData);

    /* Define object */
    g_fileWrite(file, "this->define();\n");

    g_fileDedent(file);
    g_fileWrite(file, "}\n");
}

static void cpp_implGetter(corto_generator g, g_file file, corto_member m) {
    corto_id id, memberId, refId;

    /* Getter declaration */
    cpp_memberGetter(g, file, m, FALSE);
    g_fileWrite(file, " {\n");
    g_fileIndent(file);

    /* Return value */
    if(!m->type->reference) {
        g_fileWrite(file, "return ((%s)this->__handle)->%s;\n",
                g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                g_id(g, corto_nameof(m), memberId));
    }else {
        g_fileWrite(file, "%s result(((%s)this->__handle)->%s);\n",
                g_fullOid(g, m->type, refId),
                g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                g_id(g, corto_nameof(m), memberId));
        g_fileWrite(file, "return result;\n");
    }

    g_fileDedent(file);
    g_fileWrite(file, "}\n");
}

static void cpp_implSetter(corto_generator g, g_file file, corto_member m) {
    corto_id id, memberId;

    /* Getter declaration */
    cpp_memberSetter(g, file, m, FALSE);
    g_fileWrite(file, " {\n");
    g_fileIndent(file);

    /* Set value */
    if(!m->type->reference) {
        if((m->type->kind == CORTO_PRIMITIVE) && (corto_primitive(m->type)->kind == CORTO_TEXT)) {
            g_fileWrite(file, "if(((%s)this->__handle)->%s) {\n",
                    g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                    g_id(g, corto_nameof(m), memberId));
            g_fileIndent(file);
            g_fileWrite(file, "corto::dealloc(((%s)this->__handle)->%s);\n",
                    g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                    g_id(g, corto_nameof(m), memberId));
            g_fileDedent(file);
            g_fileWrite(file, "};\n");
            g_fileWrite(file, "((%s)this->__handle)->%s = v ? corto::strdup(v) : NULL;\n",
                    g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                    g_id(g, corto_nameof(m), memberId));
        }else {
            g_fileWrite(file, "((%s)this->__handle)->%s = v;\n",
                    g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                    g_id(g, corto_nameof(m), memberId));
        }
    }else {
        g_fileWrite(file, "if(v) {\n");
        g_fileIndent(file);
        g_fileWrite(file, "corto::set((corto::lang::object*)&((%s)this->__handle)->%s, v._handle());\n",
                g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                g_id(g, corto_nameof(m), memberId));
        g_fileDedent(file);
        g_fileWrite(file, "}else {\n");
        g_fileIndent(file);
        g_fileWrite(file, "corto::set((corto::lang::object*)&((%s)this->__handle)->%s, NULL);\n",
                        g_fullOidExt(g, corto_parentof(m), id, CORTO_GENERATOR_ID_CLASS_LOWER),
                        g_id(g, corto_nameof(m), memberId));
        g_fileDedent(file);
        g_fileWrite(file, "}\n");
    }

    g_fileDedent(file);
    g_fileWrite(file, "}\n");
}



/* Generate getters & setters */
static void cpp_implClass(corto_generator g, g_file file, corto_interface o) {
    corto_uint32 i;
    corto_member m;
    corto_id id;

    /* Constructors */
    cpp_implConstructor(g, file, o);
    cpp_implConstructorScoped(g, file, o);

    for(i=0; i<corto_interface(o)->members.length; i++) {
        m = corto_interface(o)->members.buffer[i];

        g_fileWrite(file, "\n");
        g_fileWrite(file, "// %s %s\n", corto_fullname(corto_member(m)->type, id), corto_nameof(m));
        cpp_implGetter(g, file, m);
        cpp_implSetter(g, file, m);
    }
}

/* Find all reference-types in members and procedures */
static int cpp_findReferences(corto_object o, void* userData) {
    if(corto_class_instanceof(corto_member_o, o)) {
        if(corto_member(o)->type->reference) {
            if(!corto_llHasObject(userData, corto_member(o)->type)) {
                corto_llInsert(userData, corto_member(o)->type);
            }
        }
    }else if(corto_class_instanceof(corto_procedure_o, corto_typeof(o))) {
        corto_uint32 i;
        corto_parameter* p;

        /* Check returnType */
        if(corto_function(o)->returnType->reference) {
            if(!corto_llHasObject(userData, corto_function(o)->returnType)) {
                corto_llInsert(userData, corto_function(o)->returnType);
            }
        }

        /* Walk parameters */
        for(i=0; i<corto_function(o)->parameters.length; i++) {
            p = &corto_function(o)->parameters.buffer[i];
            if(p->type->reference) {
                if(!corto_llHasObject(userData, p->type)) {
                    corto_llInsert(userData, p->type);
                }
            }
        }
    }
    return 1;
}

/* Collect class-headerfiles that must be included in sourcefile. */
static corto_ll cpp_findHeaders(corto_interface a) {
    corto_ll refs;
    refs = corto_llNew();
    corto_scopeWalk(a, cpp_findReferences, refs);
    return refs;
}

/* Print headers for used reference-types */
static void cpp_printHeaders(corto_generator g, g_file file, corto_interface a) {
    corto_ll refs;
    corto_iter iter;

    refs = cpp_findHeaders(a);
    iter = corto_llIter(refs);
    while(corto_iterHasNext(&iter)) {
        corto_id path, id;
        corto_object o;

        o = corto_iterNext(&iter);

        if(o != a) {
            cpp_topath(corto_parentof(o), path);
            g_fileWrite(file, "#include \"%s/%s.hpp\"\n", path, g_oid(g, o, id));
        }
    }
    corto_llFree(refs);
}

static g_file cpp_implWrapperOpen(corto_generator g) {
    g_file result;
    corto_char fileName[512];
    corto_id id, name;

    corto_object o = g_getCurrent(g);
    sprintf(fileName, "%s__wrapper.c", g_getName(g));

    result = g_hiddenFileOpen(g, fileName);
    if(!result) {
        goto error;
    }

    /* Print standard comments and includes */
    g_fileWrite(result, "/* %s\n", fileName);
    g_fileWrite(result, " *\n");
    g_fileWrite(result, " * This file contains generated wrapper functions for %s.\n", corto_fullname(o, id));
    g_fileWrite(result, " */\n\n");
    g_fileWrite(result, "#include \"%s.h\"\n", g_fullOid(g, o, name));
    g_fileWrite(result, "#include \"%s__meta.h\"\n", g_getName(g));

    return result;
error:
    return NULL;
}

static g_file cpp_implOpen(corto_object o, corto_generator g) {
    g_file result;
    corto_id fullname, path, id, srcPath;
    corto_id implFileName;

    /* Get filename */
    corto_fullname(o, fullname);
    cpp_topath(g_getCurrent(g), path);

    /* Create directory */
    sprintf(srcPath, "src/%s", path);
    corto_mkdir(srcPath);

    if(strlen(path)) {
        sprintf(implFileName, "src/%s/%s.cpp", path, g_oid(g, o, id));
    }else {
        sprintf(implFileName, "src/%s.cpp", g_oid(g, o, id));
    }

    result = g_fileOpen(g, implFileName);
    if(!result) {
        corto_seterr("failed to open file '%s'", implFileName);
    }else {
        /* Print standard comments and includes */
        g_fileWrite(result, "/* $CORTO_GENERATED\n");
        g_fileWrite(result, " *\n");
        g_fileWrite(result, " * Implementation for %s.\n", fullname);
        g_fileWrite(result, " *\n");
        g_fileWrite(result, " * Only code written between the begin and end tags will be preserved\n");
        g_fileWrite(result, " * when the file is regenerated.\n");
        g_fileWrite(result, " */\n\n");
        g_fileWrite(result, "#include \"corto/lang/Class.hpp\"\n", path, g_oid(g, o, id));
        g_fileWrite(result, "#include \"corto/lang/Method.hpp\"\n", path, g_oid(g, o, id));
        g_fileWrite(result, "#include \"%s/%s.hpp\"\n", path, g_oid(g, o, id));
        g_fileWrite(result, "#include \"%s/_meta.hpp\"\n", path, g_oid(g, o, id));
        if(corto_class_instanceof(corto_interface_o, o)) {
            cpp_printHeaders(g, result, o);
        }

        g_fileWrite(result, "\n");
    }

    return result;
}

static void cpp_implClose(corto_object o, g_file file) {
    CORTO_UNUSED(o);
    g_fileWrite(file, "\n");
}

int cpp_impl(corto_object o, corto_generator g) {
    corto_string snippet;
    g_file source;
    cpp_implWalk_t walkData;

    /* Open headerfile */
    source = cpp_implOpen(o, g);
    if (!source) {
        goto error;
    }

   /* If a header exists, write it (before opening scope) */
    if((snippet = g_fileLookupSnippet(source, "$header"))) {
        g_fileWrite(source, "/* $begin($header)");
        g_fileWrite(source, "%s", snippet);
        g_fileWrite(source, "$end */\n");
        g_fileWrite(source, "\n");
    }

    /* Open scope (do not open scope for classes and procedures) */
    if(corto_class_instanceof(corto_struct_o, o)) {
        cpp_openScope(source, corto_parentof(o));
    }else {
        cpp_openScope(source, o);
    }

    /* Walk scope */
    walkData.file = source;
    walkData.g = g;
    walkData.wrapper = cpp_implWrapperOpen(g);
    if (!walkData.wrapper) {
        goto error;
    }

    /* If object is a class (abstract), generate getters & setters */
    if(corto_class_instanceof(corto_interface_o, o)) {
        cpp_implClass(g, walkData.wrapper, o);
    }

    if(!corto_scopeWalk(o, c_implProcedure, &walkData)) {
        goto error;
    }

   /* If a header exists, write it (before opening scope) */
    if((snippet = g_fileLookupSnippet(source, "$classfooter"))) {
        g_fileWrite(source, "/* $begin($classfooter)");
        g_fileWrite(source, "%s", snippet);
        g_fileWrite(source, "$end */\n");
    }

    cpp_closeScope(source);

   /* If a footer exists, write it (before opening scope) */
    if((snippet = g_fileLookupSnippet(source, "$footer"))) {
        g_fileWrite(source, "/* $begin($footer)");
        g_fileWrite(source, "%s", snippet);
        g_fileWrite(source, "$end */\n");
    }

    cpp_implClose(o, source);

    return 0;
error:
    return 1;
}
