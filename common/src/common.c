
#include "corto/gen/cpp/common/common.h"

corto_bool cpp_classToUpper = FALSE;

static corto_bool cpp_cRequiresPtr(corto_type t, cpp_context context, corto_bool isRef) {
    if (t->reference) {
        return FALSE;
    } else if (context == Cpp_Parameter) {
        if ((t->kind == CORTO_COMPOSITE) ||
           ((t->kind == CORTO_COLLECTION) && (corto_collection(t)->kind == CORTO_ARRAY)))
        {
            return TRUE;
        } else {
            return FALSE;
        }
    } else if (context == Cpp_Return) {
        return isRef;
    }

    return FALSE;
}

char* _cpp_typeId(g_generator g, corto_type t, cpp_context context, cpp_refKind refKind, corto_id buffer)
{
    corto_id typeName;
    corto_bool complex = FALSE;

    if (t->kind == CORTO_PRIMITIVE) {
        c_primitiveId(corto_primitive(t), typeName);
    } else if ((t->kind == CORTO_VOID) && !t->reference) {
        strcpy(typeName, "void");
    } else {
        corto_path(typeName, g_getCurrent(g), t, "::");
        complex = TRUE;
    }

    if (complex && ((refKind == Cpp_ByCRef) || (refKind == Cpp_ByCVal))) {
        sprintf(buffer, "%s::%s", cpp_cprefix(), corto_path(NULL, g_getCurrent(g), t, "::"));
        if (cpp_cRequiresPtr(t, context, refKind == Cpp_ByCRef)) {
            strcat(buffer, "*");
        }
    } else {
        strcpy(buffer, typeName);
    }

    return buffer;
}

char* cpp_varId(g_generator g, corto_object o, corto_id buffer) {
    corto_id cId;
    c_varId(g, o, cId);
    sprintf(buffer, "%s::%s", cpp_cprefix(), cId);
    return buffer;
}

g_file cpp_headerOpen(g_generator g, corto_object o) {
    corto_id definedMacro;
    g_file result;

    corto_path(definedMacro, root_o, o, "_");
    corto_strupper(definedMacro);

    result = g_fileOpen(g, "%s.h", corto_idof(o));
    g_fileWrite(result, "\n");
    g_fileWrite(result, "#ifndef %s_H\n", definedMacro);
    g_fileWrite(result, "#define %s_H\n", definedMacro);
    g_fileWrite(result, "\n");

    return result;
}

void cpp_headerClose(g_generator g, g_file file) {
    cpp_closeScope(file);
    g_fileWrite(file, "\n");
    g_fileWrite(file, "#endif\n");
    g_fileClose(file);
}

g_file cpp_sourceOpen(g_generator g, corto_object o) {
    corto_id definedMacro;
    g_file result;

    corto_path(definedMacro, root_o, o, "_");
    corto_strupper(definedMacro);

    result = g_fileOpen(g, "%s.cpp", corto_idof(o));
    g_fileWrite(result, "\n");
    c_include(g, result, g_getCurrent(g));

    g_fileWrite(result, "\n");
    cpp_openScope(result, g_getCurrent(g));
    g_fileWrite(result, "\n");

    return result;
}

void cpp_sourceClose(g_generator g, g_file file) {
    cpp_closeScope(file);
    g_fileWrite(file, "\n");
    g_fileClose(file);
}
