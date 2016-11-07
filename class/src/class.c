
#include "class/class.h"
#include "corto/gen/c/common/common.h"
#include "corto/gen/cpp/common/common.h"

typedef struct cpp_classWalk_t {
    g_generator g;
    g_file mainheader;
    g_file mainsource;
    g_file hiddenImpl;
    g_file header;
    g_file source;
} cpp_classWalk_t;

static corto_int16 cpp_mainHeaderOpen(cpp_classWalk_t *data) {
    data->mainheader = cpp_headerOpen(data->g, g_getCurrent(data->g));
    if (!data->mainheader) {
        goto error;
    }

    cpp_openScope(data->mainheader, g_getCurrent(data->g));

    g_fileWrite(data->mainheader, "\n");
    g_fileWrite(data->mainheader, "namespace _c {\n");
    g_fileWrite(data->mainheader, "#include \"_type.h\"\n");
    g_fileWrite(data->mainheader, "#include \"_meta.h\"\n");
    g_fileWrite(data->mainheader, "}\n\n");

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
    g_fileWrite(data->hiddenImpl,"#include <%s>\n", c_mainheader(data->g, mainheader));
    cpp_openScope(data->hiddenImpl, g_getCurrent(data->g));
    g_fileWrite(data->hiddenImpl, "\n");

    return 0;
error:
    return -1;
}

static corto_int16 cpp_visitParameter(corto_parameter *p, g_file file, corto_bool c, cpp_classWalk_t *data) {
    corto_id paramTypeId;
    cpp_typeIdentifier(data->g, p->type, Cpp_Parameter, c ? Cpp_ByCVal : Cpp_ByVal, paramTypeId);
    g_fileWrite(file, "%s %s", paramTypeId, p->name);
    return 0;
}

static corto_int16 cpp_walkProcedureParam(corto_function f, g_file file, corto_bool c, cpp_classWalk_t *data) {
    corto_int32 i = 0;
    for (i = 0; i < f->parameters.length; i ++) {
        corto_parameter *p = &f->parameters.buffer[i];
        if (i) {
            g_fileWrite(file, ",\n");
        }
        if (cpp_visitParameter(p, file, c, data)) {
            goto error;
        }
    }
    return 0;
error:
    return -1;
}

/* Generate stubs for method */
static corto_int16 cpp_methodProxy(corto_function f, cpp_classWalk_t *data) {
    corto_procedure type = corto_procedure(corto_typeof(f));
    corto_id proxyId, c_result, c_this;
    proxyId[0] = '_';
    corto_path(proxyId + 1, g_getCurrent(data->g), f, "_");
    corto_signatureName(proxyId, proxyId);

    cpp_typeIdentifier(data->g, f->returnType, Cpp_Return, f->returnsReference ? Cpp_ByCRef : Cpp_ByCVal, c_result);

    g_fileWrite(data->hiddenImpl, "extern \"C\" %s %s(\n", c_result, proxyId);
    g_fileIndent(data->hiddenImpl);
    if (c_procedureHasThis(f)) {
        cpp_typeIdentifier(data->g, corto_parentof(f), Cpp_Parameter, Cpp_ByCRef, c_this);
        g_fileWrite(data->hiddenImpl, "%s _this", c_this);
        if (f->parameters.length) {
            g_fileWrite(data->hiddenImpl, ",\n");
        }
    }

    cpp_walkProcedureParam(f, data->hiddenImpl, TRUE, data);
    g_fileWrite(data->hiddenImpl, ")\n");
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);

    if (type->kind == CORTO_METHOD) {
        corto_id cppType;
        cpp_typeIdentifier(data->g, corto_parentof(f), Cpp_Return, Cpp_ByVal, cppType);
        g_fileWrite(data->hiddenImpl, "%s _instance(_this);\n", cppType);
    }

    corto_int32 i;
    for (i = 0; i < f->parameters.length; i++) {
        corto_parameter *p = &f->parameters.buffer[i];
        if (corto_instanceof(corto_interface_o, p->type)) {
            corto_id cppType;
            cpp_typeIdentifier(data->g, p->type, Cpp_Return, Cpp_ByVal, cppType);
            g_fileWrite(data->hiddenImpl, "%s _%s(%s);\n", cppType, p->name, p->name);
        }
    }

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

static corto_int16 cpp_visitProcedure(corto_function f, cpp_classWalk_t *data) {
    corto_id resultId, methodId, methodFullId;

    cpp_typeIdentifier(data->g, f->returnType, Cpp_Return, Cpp_ByVal, resultId);
    corto_path(methodFullId, g_getCurrent(data->g), f, "::");
    corto_signatureName(methodFullId, methodFullId);
    strcpy(methodId, corto_idof(f));
    corto_signatureName(methodId, methodId);

    g_fileWrite(data->header, "%s %s(\n", resultId, methodId);
    g_fileIndent(data->header);
    if (cpp_walkProcedureParam(f, data->header, FALSE, data)) {
        goto error;
    }
    g_fileWrite(data->header, ");\n");
    g_fileDedent(data->header);

    g_fileWrite(data->source, "%s %s(\n", resultId, methodFullId);
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

static corto_int16 cpp_visitMember(corto_serializer s, corto_value *info, void *userData) {
    cpp_classWalk_t *data = userData;
    corto_type t = corto_value_getType(info);
    corto_member m = info->is.member.t;

    corto_id id, cId;
    cpp_typeIdentifier(data->g, t, Cpp_Return, Cpp_ByVal, id);

    /* Write header */
    g_fileWrite(data->header, "%s %s();\n", id, corto_idof(m));
    g_fileWrite(data->header, "void %s(%s value);\n", corto_idof(m), id);

    /* Write implementation */
    g_fileWrite(data->hiddenImpl, "%s %s()\n", id, corto_path(NULL, g_getCurrent(data->g), m, "::"));
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "return ((%s)this->handle())->%s;\n",
      cpp_typeIdentifier(data->g, corto_parentof(m), Cpp_Parameter, Cpp_ByCRef, cId),
      corto_idof(m));
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    g_fileWrite(data->hiddenImpl, "void %s(%s value)\n", corto_path(NULL, g_getCurrent(data->g), m, "::"), id);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "((%s)this->handle())->%s = value;\n",
      cpp_typeIdentifier(data->g, corto_parentof(m), Cpp_Parameter, Cpp_ByCRef, cId),
      corto_idof(m));
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

static corto_int16 cpp_visitClass(corto_interface type, cpp_classWalk_t *data) {
    corto_id mainheader, id, cId;
    corto_id baseId, baseCType;

    g_oid(data->g, type, id);

    data->header = cpp_headerOpen(data->g, type);
    if (!data->header) {
        goto error;
    }

    cpp_openScope(data->mainheader, corto_parentof(g_getCurrent(data->g)));
    c_include(data->g, data->mainheader, type);

    g_fileWrite(data->header, "\n");
    g_fileWrite(data->header,"#include <%s>\n", c_mainheader(data->g, mainheader));
    g_fileWrite(data->header, "\n");
    cpp_openScope(data->header, g_getCurrent(data->g));

    g_fileWrite(data->header, "\n");
    if (!type->base) {
        strcpy(baseId, "::corto::Object");
        strcpy(baseCType, "corto_object");
    } else {
        corto_path(baseId, g_getCurrent(data->g), type->base, "::");
        cpp_typeIdentifier(data->g, type->base, Cpp_Parameter, Cpp_ByCRef, baseCType);
    }
    g_fileWrite(data->header, "class %s : public %s\n", id, baseId);
    g_fileWrite(data->header, "{\n");
    g_fileWrite(data->header, "public:\n");
    g_fileIndent(data->header);
    g_fileWrite(data->header, "%s(%s handle);\n", id, cpp_typeIdentifier(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId));
    g_fileWrite(data->header, "\n");

    g_fileWrite(data->hiddenImpl, "%s::%s(%s handle) : %s((%s)handle)\n",
      id, id, cpp_typeIdentifier(data->g, type, Cpp_Parameter, Cpp_ByCRef, cId), baseId, baseCType);
    g_fileWrite(data->hiddenImpl, "{\n");
    g_fileIndent(data->hiddenImpl);
    g_fileDedent(data->hiddenImpl);
    g_fileWrite(data->hiddenImpl, "}\n");

    if (cpp_walkMembers(type, data)) {
        goto error;
    }

    g_fileWrite(data->header, "\n");

    if (cpp_walkProcedures(type, data)) {
        goto error;
    }

    g_fileDedent(data->header);
    g_fileWrite(data->header, "};\n");

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
