
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

char* cpp_typeIdFromStr(g_generator g, char *typeName, cpp_context context, corto_id buffer) {

    switch(context) {
    case Cpp_Member:
    case Cpp_Parameter:
    case Cpp_Return:
    case Cpp_Class:
        sprintf(buffer, "C%s", typeName);
        break;
    case Cpp_ClassRef:
        sprintf(buffer, "%sRef", typeName);
        break;
    case Cpp_ClassVal:
        sprintf(buffer, "%sVal", typeName);
        break;
    case Cpp_TemplateFactory:
        sprintf(buffer, "T%s", typeName);
        break;
    case Cpp_ClassFactory:
    default:
        strcpy(buffer, typeName);
        break;
    }

    return buffer;
}


char* cpp_typeIdIntern(g_generator g, corto_type t, cpp_context context, cpp_refKind refKind, corto_bool fullpath, corto_id buffer)
{
    corto_id typeName;
    corto_bool complex = FALSE;

    if (t->kind == CORTO_PRIMITIVE) {
        c_primitiveId(g, corto_primitive(t), typeName);
    } else if ((t->kind == CORTO_VOID) && !t->reference) {
        strcpy(typeName, "void");
    } else {
        if (fullpath) {
            corto_path(typeName, g_getCurrent(g), t, "::");
        } else {
            strcpy(typeName, corto_idof(t));
        }
        complex = TRUE;
    }

    if (complex && ((refKind == Cpp_ByCRef) || (refKind == Cpp_ByCVal))) {
        sprintf(buffer, "%s::%s", cpp_cprefix(), corto_path(NULL, g_getCurrent(g), t, "::"));
        if (cpp_cRequiresPtr(t, context, refKind == Cpp_ByCRef)) {
            strcat(buffer, "*");
        }
    } else {
        if (complex) {
            cpp_typeIdFromStr(g, typeName, context, buffer);
        } else {
            strcpy(buffer, typeName);
        }
    }

    return buffer;

}

char* _cpp_typeId(g_generator g, corto_type t, cpp_context context, corto_id buffer)
{
    return cpp_typeIdIntern(g, t, context, Cpp_ById, FALSE, buffer);
}

char* _cpp_typeFullId(g_generator g, corto_type t, cpp_context context, cpp_refKind refKind, corto_id buffer)
{
    return cpp_typeIdIntern(g, t, context, refKind, TRUE, buffer);
}

char* cpp_varId(g_generator g, corto_object o, corto_id buffer) {
    corto_id cId;
    c_varId(g, o, cId);
    sprintf(buffer, "%s::%s", cpp_cprefix(), cId);
    return buffer;
}

char* cpp_mainheader(g_generator g, corto_id header) {
    c_mainheader(g, header);
    strcat(header, "pp");
    return header;
}

void cpp_include(g_generator g, g_file file, corto_object o) {
    corto_id name;
    corto_object package = c_findPackage(g, o);

    corto_assert (package != NULL, "can't include '%s' from non-package scopes",
        corto_fullpath(NULL, o));

    c_includeFrom(
      g,
      file,
      package,
      c_filename(g, name, o, "hpp"));
}

g_file cpp_headerOpen(g_generator g, corto_object o) {
    corto_id definedMacro;
    g_file result;

    corto_path(definedMacro, root_o, o, "_");
    corto_strupper(definedMacro);

    result = g_fileOpen(g, "%s.hpp", corto_idof(o));
    g_fileWrite(result, "\n");
    g_fileWrite(result, "#ifndef %s_HPP\n", definedMacro);
    g_fileWrite(result, "#define %s_HPP\n", definedMacro);
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
    cpp_include(g, result, g_getCurrent(g));

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

/* Function builds a scope-stack from root to module */
static void
cpp_scopeStack(
    corto_object module,
    corto_object* stack /* corto_object[SD_MAX_SCOPE_DEPTH] */)
{
    corto_uint32 count;
    corto_object ptr;

    corto_assert(module != NULL, "NULL passed for module to sd_utilModuleStack");

    /* Count scope depth */
    ptr = module;
    count = 1; /* For self */
    while((ptr = corto_parentof(ptr))) {
        count++;
    }

    if(count > CORTO_MAX_SCOPE_DEPTH) {
        corto_error("cpp_scopeStack: unsupported scope-depth (depth=%d, max=%d).", count, CORTO_MAX_SCOPE_DEPTH);
    }
    corto_assert(count <= CORTO_MAX_SCOPE_DEPTH, "MAX_SCOPE_DEPTH overflow.");

    /* Fill module stack */
    ptr = module;
    while(count) {
        stack[count-1] = ptr;
        ptr = corto_parentof(ptr);
        count--;
    }

    /* ptr should be NULL */
    corto_assert(!ptr, "ptr is NULL.");
}

/* Find first common module in two module-stacks */
static corto_object
cpp_commonScope(
    corto_object from,
    corto_object to,
    corto_object* fromStack,
    corto_object* toStack,
    corto_uint32* i_out)
{
    corto_object fromPtr, toPtr;
    corto_uint32 i;

    /* fromPtr and toPtr will initially point to base */
    i = 0;
    do {
        fromPtr = fromStack[i];
        toPtr = toStack[i];
        i++;
    }while((fromPtr != from) && (toPtr != to) && (fromStack[i] == toStack[i]));

    /* Common module is now stored in fromPtr and toPtr. */

    if(i_out) {
        *i_out = i;
    }

    return fromPtr;
}

/* Check whether a type translates to a native construct or may act as a C++ namespace */
corto_bool
cpp_nativeType(corto_object o) {
	corto_bool result = FALSE;

	if(corto_class_instanceof(corto_type_o, o)) {
		switch(corto_type(o)->kind) {
		case CORTO_VOID:
		    if(corto_type(o)->reference) {
		        result = TRUE;
		    }
			break;
		default:
			result = TRUE;
			break;
		}
	}

	return result;
}

/* Open a scope */
void
cpp_openScope(
    g_file file,
    corto_object to)
{
    corto_object from;

    if (to) {

        /* Do not open namespaces for non-void type-scopes */
        while(cpp_nativeType(to)) {
        	to = corto_parentof(to);
        }

        /* If context->module is NULL, start from root */
        from = g_fileScopeGet(file);
        if(!from) {
            from = root_o;
        }

        /* If from and to are not equal, find shortest path between modules. */
        if(from != to) {
            corto_object fromStack[CORTO_MAX_SCOPE_DEPTH], toStack[CORTO_MAX_SCOPE_DEPTH];
            corto_object fromPtr, toPtr;
            corto_uint32 i;

            /* Find common module. First build up a scope-stack for the two modules which
             * are ordered base -> <module>. Then walk through these stacks to find the
             * last common module. */
            cpp_scopeStack(from, fromStack);
            cpp_scopeStack(to, toStack);
            fromPtr = toPtr = cpp_commonScope(from, to, fromStack, toStack, &i);

            /* Walk down from module 'from' to 'toPtr' */
            fromPtr = from;
            while(fromPtr != toPtr) {
                g_fileWrite(file, "}\n");
                fromPtr = corto_parentof(fromPtr);
            }

            /* Walk from toPtr to 'to' */
            while(toPtr != to) {
                corto_id id;
                toPtr = toStack[i];
                g_fileWrite(file, "namespace %s {\n", g_oid(g_fileGetGenerator(file), toPtr, id));
                i++;
            }

            /* Update context->module */
            g_fileScopeSet(file, to);
        }
    }
}

void cpp_closeScope(g_file file) {
    corto_object ptr;

    g_fileWrite(file, "\n");

    if((ptr = g_fileScopeGet(file))) {
        while((ptr = corto_parentof(ptr))) {
            g_fileWrite(file, "}\n");
        }

        g_fileScopeSet(file, NULL);
    }
}

char *cpp_cprefix(void) {
    return "types";
}
