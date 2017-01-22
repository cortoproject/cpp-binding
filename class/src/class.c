
#include "corto/gen/c/common/common.h"
#include "corto/gen/cpp/common/common.h"
#include "corto/gen/cpp/class/class.h"

static corto_int16 cpp_mainHeaderOpen(cpp_classWalk_t *data) {
    data->mainheader = cpp_headerOpen(data->g, g_getCurrent(data->g));
    if (!data->mainheader) {
        goto error;
    }

    g_fileWrite(data->mainheader, "#include <corto/cpp/cpp.hpp>\n");
    g_fileWrite(data->mainheader, "\n");

    cpp_openScope(data->mainheader, g_getCurrent(data->g));

    g_fileWrite(data->mainheader, "\n");
    g_fileWrite(data->mainheader, "namespace %s {\n", cpp_cprefix());
    g_fileWrite(data->mainheader, "#include \"_type.h\"\n");
    g_fileWrite(data->mainheader, "#include \"_load.h\"\n");
    g_fileWrite(data->mainheader, "}\n");
    cpp_closeScope(data->mainheader);
    g_fileWrite(data->mainheader, "\n");

    return 0;
error:
    return -1;
}

static corto_int16 cpp_mainSourceOpen(cpp_classWalk_t *data) {
    data->mainsource = cpp_sourceOpen(data->g, g_getCurrent(data->g));
    if (!data->mainsource) {
        goto error;
    }

    cpp_openScope(data->mainsource, root_o);

    g_fileWrite(data->mainsource, "int %sMain(int argc, char* argv[]) {\n", corto_idof(g_getCurrent(data->g)));
    g_fileWrite(data->mainsource, "/* $begin(main)");
    g_fileIndent(data->mainsource);
    corto_string snippet;
    if ((snippet = g_fileLookupSnippet(data->mainsource, "main"))) {
        g_fileWrite(data->mainsource, "%s", snippet);
        g_fileWrite(data->mainsource, "$end */\n");
        g_fileDedent(data->mainsource);
    } else {
        g_fileWrite(data->mainsource, " */\n\n");
        g_fileWrite(data->mainsource, "/* Insert implementation */\n\n");
        g_fileWrite(data->mainsource, "return 0;\n");
        g_fileDedent(data->mainsource);
        g_fileWrite(data->mainsource, "/* $end */\n");
    }
    g_fileWrite(data->mainsource, "}\n");

    return 0;
error:
    return -1;
}

static corto_int16 cpp_hiddenImplOpen(cpp_classWalk_t *data) {
    data->hiddenImpl = g_hiddenFileOpen(data->g, "_api.cpp", corto_idof(g_getCurrent(data->g)));
    if (!data->hiddenImpl) {
        goto error;
    }

    corto_id mainheader;
    g_fileWrite(data->hiddenImpl,"#include <%s>\n", cpp_mainheader(data->g, mainheader));
    cpp_openScope(data->hiddenImpl, g_getCurrent(data->g));
    g_fileWrite(data->hiddenImpl, "\n");

    return 0;
error:
    return -1;
}

static corto_int16 cpp_visitParameter(corto_parameter *p, g_file file, corto_bool c, cpp_classWalk_t *data) {
    corto_id paramTypeId;
    cpp_typeFullId(data->g, p->type, Cpp_Parameter, c ? Cpp_ByCVal : Cpp_ByVal, paramTypeId);
    g_fileWrite(file, "%s %s", paramTypeId, p->name);
    return 0;
}

static corto_int16 cpp_walkProcedureParam(corto_function f, g_file file, corto_bool c, cpp_classWalk_t *data) {
    corto_int32 i = 0;
    for (i = 0; i < f->parameters.length; i ++) {
        corto_parameter *p = &f->parameters.buffer[i];
        if (i) {
            g_fileWrite(file, ",");
        }
        g_fileWrite(file, "\n");
        if (cpp_visitParameter(p, file, c, data)) {
            goto error;
        }
    }
    return 0;
error:
    return -1;
}

/* Generate proxy method that wraps C++ method in C, so it can be associated
 * with a corto function object. */
static corto_int16 cpp_methodProxy(corto_function f, cpp_classWalk_t *data) {
    corto_id proxyId, c_return, c_parameter, classRef, classVal;

    proxyId[0] = '_';
    corto_path(proxyId + 1, g_getCurrent(data->g), f, "_");
    corto_signatureName(proxyId, proxyId);

    cpp_typeFullId(data->g, f->returnType, Cpp_Return, f->returnsReference ? Cpp_ByCRef : Cpp_ByCVal, c_return);
    cpp_typeFullId(data->g, corto_parentof(f), Cpp_ClassRef, Cpp_ById, classRef);
    cpp_typeFullId(data->g, corto_parentof(f), Cpp_ClassVal, Cpp_ById, classVal);
    cpp_typeFullId(data->g, corto_parentof(f), Cpp_Parameter, Cpp_ByCRef, c_parameter);

    /* Function must be accessible from C */
    g_fileWrite(data->hiddenImpl, "extern \"C\" %s %s(\n", c_return, proxyId);

    g_fileIndent(data->hiddenImpl);

    /* Add this parameter to parameters if function has one */
    if (c_procedureHasThis(f)) {
        g_fileWrite(data->hiddenImpl, "%s _this", c_parameter);
        if (f->parameters.length) {
            g_fileWrite(data->hiddenImpl, ",\n");
        }
    }

    cpp_walkProcedureParam(f, data->hiddenImpl, TRUE, data);
    g_fileWrite(data->hiddenImpl, ")\n");
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);

    /* Wrap this parameter in C++ class containing C++ method implementation */
    if (c_procedureHasThis(f)) {
        corto_id cppType;
        cpp_typeFullId(data->g, corto_parentof(f), Cpp_Return, Cpp_ByVal, cppType);
        g_fileWrite(data->hiddenImpl, "%s _instance(_this);\n", classRef);
    }

    /* Wrap other parameters in C++ classes so they can be passed to method */
    corto_int32 i;
    for (i = 0; i < f->parameters.length; i++) {
        corto_parameter *p = &f->parameters.buffer[i];
        if (corto_instanceof(corto_interface_o, p->type)) {
            corto_id cppType;
            cpp_typeFullId(data->g, p->type, Cpp_Return, Cpp_ByVal, cppType);
            if (p->type->reference) {
                g_fileWrite(data->hiddenImpl, "%s _%s(%s);\n", classRef, p->name, p->name);
            } else {
                g_fileWrite(data->hiddenImpl, "%s _%s(%s);\n", classVal, p->name, p->name);
            }
        }
    }

    /* Invoke C++ method */
    corto_id methodId;
    strcpy(methodId, corto_idof(f));
    corto_signatureName(methodId, methodId);
    g_fileWrite(data->hiddenImpl, "_instance.%s(\n", methodId);
    g_fileIndent(data->hiddenImpl);
    for (i = 0; i < f->parameters.length; i++) {
        if (i) {
            g_fileWrite(data->hiddenImpl, ",\n");
        }
        corto_parameter *p = &f->parameters.buffer[i];
        g_fileWrite(data->hiddenImpl, "_%s", p->name);
    }
    g_fileWrite(data->hiddenImpl, ");\n");
    g_fileDedent(data->hiddenImpl);

    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    return 0;
}

/* Add C++ method implementation to source file */
static corto_int16 cpp_visitProcedure(corto_function f, cpp_classWalk_t *data) {
    corto_id resultId, methodId, methodFullId;

    cpp_typeFullId(data->g, f->returnType, Cpp_Return, Cpp_ByVal, resultId);
    corto_path(methodFullId, g_getCurrent(data->g), f, "::");
    corto_signatureName(corto_idof(f), methodId);
    cpp_typeFullId(data->g, corto_parentof(f), Cpp_Return, Cpp_ById, methodFullId);
    strcat(methodFullId, "::");
    strcat(methodFullId, methodId);

    g_fileWrite(data->header, "%s %s(", resultId, methodId);
    g_fileIndent(data->header);
    if (cpp_walkProcedureParam(f, data->header, FALSE, data)) {
        goto error;
    }
    g_fileWrite(data->header, ");\n");
    g_fileDedent(data->header);

    g_fileWrite(data->source, "%s %s(", resultId, methodFullId);
    g_fileIndent(data->source);
    if (cpp_walkProcedureParam(f, data->source, FALSE, data)) {
        goto error;
    }
    g_fileWrite(data->source, ")\n");
    g_fileDedent(data->source);
    g_fileWrite(data->source, "{\n");

    char *snippetId;
    if (f->overloaded) {
        snippetId = corto_idof(f);
    } else {
        snippetId = methodId;
    }

    /* Use existing implementation, if exists */
    g_fileWrite(data->source, "/* $begin(%s)", snippetId);
    g_fileIndent(data->source);
    corto_string snippet;
    if ((snippet = g_fileLookupSnippet(data->source, snippetId))) {
        g_fileWrite(data->source, "%s", snippet);
        g_fileWrite(data->source, "$end */\n");
        g_fileDedent(data->source);
    } else {
        g_fileWrite(data->source, " */\n\n");
        g_fileWrite(data->source, "/* Insert implementation */\n\n");
        g_fileDedent(data->source);
        g_fileWrite(data->source, "/* $end */\n");
    }

    g_fileWrite(data->source, "}\n");

    if (cpp_methodProxy(f, data)) {
        goto error;
    }

    return 0;
error:
    return -1;
}

static corto_int16 cpp_walkProcedures(corto_interface type, cpp_classWalk_t *data) {

    corto_objectseq scope = corto_scopeClaim(type);
    corto_int32 i;
    for (i = 0; i < scope.length; i++) {
        corto_object child = scope.buffer[i];
        if (corto_instanceof(corto_function_o, child)) {
            if (!data->source) {
                data->source = cpp_sourceOpen(data->g, type);
                if (!data->source) {
                    goto error;
                }
            }
            if (cpp_visitProcedure(child, data)) {
                goto error;
            }
        }
    }

    corto_scopeRelease(scope);

    if (data->source) {
        cpp_sourceClose(data->g, data->source);
        data->source = NULL;
    }

    return 0;
error:
    return -1;
}

/* For each member, add getters / setters so application never has to access
 * corto objects/values directly */
static corto_int16 cpp_visitMember(corto_serializer s, corto_value *info, void *userData) {
    cpp_classWalk_t *data = userData;
    corto_type t = corto_value_getType(info);
    corto_member m = info->is.member.t;

    corto_id id, cId, classId, memberId;
    cpp_typeFullId(data->g, t, Cpp_Return, Cpp_ByVal, id);
    cpp_typeFullId(data->g, corto_parentof(m), Cpp_Class, Cpp_ById, classId);
    g_oid(data->g, m, memberId);

    /* Write header */
    g_fileWrite(data->header, "%s %s();\n", id, corto_idof(m));
    g_fileWrite(data->header, "void %s(%s value);\n", corto_idof(m), id);

    /* Write implementation */
    g_fileWrite(data->hiddenImpl, "%s %s::%s()\n", id, classId, memberId);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "return ((%s)this->ptr())->%s;\n",
      cpp_typeFullId(data->g, corto_parentof(m), Cpp_Parameter, Cpp_ByCRef, cId),
      memberId);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->hiddenImpl, "void %s::%s(%s value)\n", classId, memberId, id);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "((%s)this->ptr())->%s = value;\n",
      cpp_typeFullId(data->g, corto_parentof(m), Cpp_Parameter, Cpp_ByCRef, cId),
      memberId);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    return 0;
}

static corto_int16 cpp_walkMembers(corto_interface type, cpp_classWalk_t *data) {
    struct corto_serializer_s s;
    corto_serializerInit(&s);
    s.metaprogram[CORTO_MEMBER] = cpp_visitMember;
    s.metaprogram[CORTO_BASE] = NULL;
    if (corto_metaWalk(&s, type, data)) {
        goto error;
    }
    return 0;
error:
    return -1;
}

/* Generate code for a corto interface type (interface, class, struct, procedure) */
static corto_int16 cpp_visitClass(corto_interface type, cpp_classWalk_t *data) {
    corto_id mainheader, classFactory, class, classVal, classRef, classValId, cId, cValId, varId;
    corto_id baseClass, baseCType;

    cpp_typeId(data->g, type, Cpp_Class, class);
    cpp_typeId(data->g, type, Cpp_ClassVal, classVal);
    cpp_typeId(data->g, type, Cpp_ClassRef, classRef);
    cpp_typeFullId(data->g, type, Cpp_ClassVal, Cpp_ById, classValId);
    cpp_typeId(data->g, type, Cpp_ClassFactory, classFactory);
    cpp_varId(data->g, type, varId);
    cpp_typeFullId(data->g, type, Cpp_Return, Cpp_ByCVal, cValId);
    cpp_typeFullId(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId);

    data->header = cpp_headerOpen(data->g, type);
    if (!data->header) {
        goto error;
    }

    cpp_openScope(data->mainheader, corto_parentof(g_getCurrent(data->g)));
    cpp_include(data->g, data->mainheader, type);

    g_fileWrite(data->header,"#include <%s>\n", cpp_mainheader(data->g, mainheader));
    g_fileWrite(data->header, "\n");
    cpp_openScope(data->header, g_getCurrent(data->g));

    g_fileWrite(data->header, "\n");

    /* If type doesn't inherit from anything, it inherits from corto::Object */
    if (!type->base) {
        strcpy(baseClass, "::corto::Object");
        strcpy(baseCType, "corto_object");
    } else {
        cpp_typeFullId(data->g, type->base, Cpp_Class, Cpp_ById, baseClass);
        cpp_typeFullId(data->g, type->base, Cpp_Parameter, Cpp_ByCRef, baseCType);
    }

    /* Forward declare factory class */
    g_fileWrite(data->header, "class %s;\n", classFactory);
    g_fileWrite(data->header, "\n");

    /* Add implementation class (C<Type>) */
    g_fileWrite(data->header, "// Implementation of corto type %s\n", corto_fullpath(NULL, type));
    g_fileWrite(data->header, "class %s : public %s\n", class, baseClass);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);

    g_fileWrite(data->header, "%s();\n", class);
    g_fileWrite(data->hiddenImpl, "%s::%s() : %s((%s)NULL)\n",
      class, class, baseClass, baseCType);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->header, "\n");

    g_fileWrite(data->header, "// Getters/setters\n");
    if (cpp_walkMembers(type, data)) {
        goto error;
    }

    g_fileWrite(data->header, "\n");

    g_fileWrite(data->header, "// Methods\n");
    if (cpp_walkProcedures(type, data)) {
        goto error;
    }

    g_fileWrite(data->header, "\n");

    g_fileDedent(data->header);
    g_fileWrite(data->header, "protected:\n");
    g_fileIndent(data->header);

    g_fileWrite(data->header, "// Protected constructors\n");
    g_fileWrite(data->header, "%s(%s ref, %s ptr, corto_type type);\n", class, cId, cId);
    g_fileWrite(data->hiddenImpl, "%s::%s(%s ref, %s ptr, corto_type type) : %s((%s)ref, (%s)ptr, type)\n",
      class, class, cId, cId, baseClass, baseCType, baseCType);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->header, "%s(%s ref, %s ptr);\n", class, cId, cId);
    g_fileWrite(data->hiddenImpl, "%s::%s(%s ref, %s ptr) : %s((%s)ref, (%s)ptr, (corto_type)%s)\n",
      class, class, cId, cId, baseClass, baseCType, baseCType, varId);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->header, "%s(%s ref);\n", class, cpp_typeFullId(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId));
    g_fileWrite(data->hiddenImpl, "%s::%s(%s ref) : %s((%s)ref)\n",
      class, class, cpp_typeFullId(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId), baseClass, baseCType);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");


    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");
    g_fileWrite(data->header, "\n");

    // Add class for managing references to type (<Type>Ref)
    g_fileWrite(data->header, "// Reference of corto type %s\n", corto_fullpath(NULL, type));
    g_fileWrite(data->header, "class %s : public %s\n", classRef, class);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);

    g_fileWrite(data->header, "%s(%s ref);\n", classRef, cpp_typeFullId(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId));
    g_fileWrite(data->hiddenImpl, "%s::%s(%s ref) : %s((%s)ref)\n",
      classRef, classRef, cpp_typeFullId(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId), class, cId);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->header, "%s operator()();\n", classFactory);
    g_fileWrite(data->hiddenImpl, "%s %s::operator ()()\n", classFactory, classRef);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "return %s(*this, ref());\n", classFactory);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");
    g_fileWrite(data->header, "\n");

    // Add class for managing references to type (<Type>Val)
    g_fileWrite(data->header, "// Value (on stack) of corto type %s\n", corto_fullpath(NULL, type));
    g_fileWrite(data->header, "class %s : public %s\n", classVal, class);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "friend class %s;\n", class);
    g_fileWrite(data->header, "%s operator()();\n", classFactory);
    g_fileWrite(data->hiddenImpl, "%s %s::operator ()()\n", classFactory, classVal);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "return %s(*this);\n", classFactory);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->header, "%s(%s value);\n",
      classVal, cId);
    g_fileWrite(data->hiddenImpl,
      "%s::%s(%s value) : %s(NULL, &this->m_value) { corto_copyp(&this->m_value, %s, value); }\n",
      classValId, classVal, cId, class, varId);
    g_fileDedent(data->header);
    g_fileWrite(data->header, "private:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s m_value;\n", cValId);
    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");

    // Add code for fluent factory class (<Type>) */
    if (cpp_fluentDecl((corto_type)type, data)) {
        goto error;
    }

    cpp_headerClose(data->g, data->header);

    return 0;
error:
    return -1;
}

static int cpp_walkTypes(corto_object o, void* userData) {
    cpp_classWalk_t *data = userData;

    if (corto_instanceof(corto_interface_o, o)) {
        if (cpp_visitClass(corto_interface(o), data)) {
            goto error;
        }
    }

    return 1; /* continue */
error:
    return 0;
}

/* Generator main */
corto_int16 corto_genMain(g_generator g) {
    cpp_classWalk_t walkData = {g, NULL, NULL};

    if (cpp_mainHeaderOpen(&walkData)) {
        goto error;
    }

    if (cpp_mainSourceOpen(&walkData)) {
        goto error;
    }

    if (cpp_hiddenImplOpen(&walkData)) {
        goto error;
    }

    if (!g_walkRecursive(g, cpp_walkTypes, &walkData)) {
        goto error;
    }

    cpp_headerClose(g, walkData.mainheader);
    cpp_sourceClose(g, walkData.mainsource);
    cpp_sourceClose(g, walkData.hiddenImpl);

    return 0;
error:
    return -1;
}
