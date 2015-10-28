/*
 * c_common.c
 *
 *  Created on: Dec 21, 2012
 *      Author: sander
 */

#include "cpp_common.h"

corto_bool cpp_classToUpper = FALSE;

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
            g_fileDedent(file);
            g_fileWrite(file, "}\n");
            fromPtr = corto_parentof(fromPtr);
        }

        /* Walk from toPtr to 'to' */
        while(toPtr != to) {
            corto_id id;
            toPtr = toStack[i];
            g_fileWrite(file, "namespace %s {\n", g_oid(g_fileGetGenerator(file), toPtr, id));
            g_fileIndent(file);
            i++;
        }

        /* Update context->module */
        g_fileScopeSet(file, to);
    }
}

void cpp_closeScope(g_file file) {
    corto_object ptr;

    if((ptr = g_fileScopeGet(file))) {
        while((ptr = corto_parentof(ptr))) {
            g_fileDedent(file);
            g_fileWrite(file, "}\n");
        }

        g_fileScopeSet(file, NULL);
    }
}

/* Escape language keywords */
static int cpp_keywordEscape(corto_string inputName, corto_string buffer) {

    if( !strcmp(inputName, "alignas") ||
        !strcmp(inputName, "alignof") ||
        !strcmp(inputName, "and") ||
        !strcmp(inputName, "and_eq") ||
        !strcmp(inputName, "asm") ||
        !strcmp(inputName, "auto") ||
        !strcmp(inputName, "bitand") ||
        !strcmp(inputName, "bitor") ||
        !strcmp(inputName, "bool") ||
        !strcmp(inputName, "break") ||
        !strcmp(inputName, "case") ||
        !strcmp(inputName, "catch") ||
        !strcmp(inputName, "char") ||
        !strcmp(inputName, "char16_t") ||
        !strcmp(inputName, "char32_t") ||
        !strcmp(inputName, "class") ||
        !strcmp(inputName, "compl") ||
        !strcmp(inputName, "const") ||
        !strcmp(inputName, "constexpr") ||
        !strcmp(inputName, "const_cast") ||
        !strcmp(inputName, "continue") ||
        !strcmp(inputName, "decltype") ||
        !strcmp(inputName, "default") ||
        !strcmp(inputName, "delete") ||
        !strcmp(inputName, "do") ||
        !strcmp(inputName, "double") ||
        !strcmp(inputName, "dynamic_cast") ||
        !strcmp(inputName, "else") ||
        !strcmp(inputName, "enum") ||
        !strcmp(inputName, "explicit") ||
        !strcmp(inputName, "export") ||
        !strcmp(inputName, "extern") ||
        !strcmp(inputName, "false") ||
        !strcmp(inputName, "float") ||
        !strcmp(inputName, "for") ||
        !strcmp(inputName, "friend") ||
        !strcmp(inputName, "goto") ||
        !strcmp(inputName, "if") ||
        !strcmp(inputName, "inline") ||
        !strcmp(inputName, "int") ||
        !strcmp(inputName, "long") ||
        !strcmp(inputName, "mutable") ||
        !strcmp(inputName, "namespace") ||
        !strcmp(inputName, "new") ||
        !strcmp(inputName, "noexcept") ||
        !strcmp(inputName, "not") ||
        !strcmp(inputName, "not_eq") ||
        !strcmp(inputName, "nullptr") ||
        !strcmp(inputName, "operator") ||
        !strcmp(inputName, "or") ||
        !strcmp(inputName, "or_eq") ||
        !strcmp(inputName, "private") ||
        !strcmp(inputName, "protected") ||
        !strcmp(inputName, "public") ||
        !strcmp(inputName, "register") ||
        !strcmp(inputName, "reinterpret_cast") ||
        !strcmp(inputName, "return") ||
        !strcmp(inputName, "short") ||
        !strcmp(inputName, "signed") ||
        !strcmp(inputName, "sizeof") ||
        !strcmp(inputName, "static") ||
        !strcmp(inputName, "static_assert") ||
        !strcmp(inputName, "static_cast") ||
        !strcmp(inputName, "struct") ||
        !strcmp(inputName, "switch") ||
        !strcmp(inputName, "template") ||
        !strcmp(inputName, "this") ||
        !strcmp(inputName, "thread_local") ||
        !strcmp(inputName, "throw") ||
        !strcmp(inputName, "true") ||
        !strcmp(inputName, "try") ||
        !strcmp(inputName, "typedef") ||
        !strcmp(inputName, "typeid") ||
        !strcmp(inputName, "typename") ||
        !strcmp(inputName, "union") ||
        !strcmp(inputName, "using") ||
        !strcmp(inputName, "unsigned") ||
        !strcmp(inputName, "virtual") ||
        !strcmp(inputName, "void") ||
        !strcmp(inputName, "volatile") ||
        !strcmp(inputName, "wchar_t") ||
        !strcmp(inputName, "xor") ||
        !strcmp(inputName, "while")) {
        memmove(buffer + 1, inputName, strlen(inputName) + 1);
        *buffer = '_';
    }else {
        memmove(buffer, inputName, strlen(inputName) + 1);
    }
    return 0;
}

corto_string corto_genId(corto_string str, corto_id id) {
    corto_char *ptr, ch, *bptr;
    corto_id buff;

    ptr = str;
    *id = '\0';

    /* Translate identifier to C++ */
    bptr = buff;
    while((ch = *ptr)) {
        switch(ch) {
        case ':':
            if(bptr != buff) {
                *bptr = '\0';
                cpp_keywordEscape(buff, buff);
                strcat(id, buff);
            }
            if (*id) strcat(id, "::");
            bptr = buff;
            *bptr = '\0';
            ptr++;
            break;
        default:
            *bptr = ch;
            bptr++;
            break;
        }
        ptr++;
    }
    *bptr = '\0';
    cpp_keywordEscape(buff, buff);

    strcat(id, buff);

    return id;
}

/* Get string representing the base-platform type */
corto_char* cpp_primitiveId(corto_primitive t, corto_char* buff) {
    corto_bool appendWidth, appendT;

    appendWidth = FALSE;
    appendT = FALSE;

    switch(t->kind) {
    case CORTO_BOOLEAN:
    	strcpy(buff, "bool");
    	break;
    case CORTO_CHARACTER:
        switch(t->width) {
        case CORTO_WIDTH_8:
            strcpy(buff, "char");
            break;
        case CORTO_WIDTH_16:
            strcpy(buff, "wchar");
            appendT = TRUE;
            break;
        default: {
            corto_id id;
            corto_error("c_typePrimitivePlatformType: unsupported width for primitive type '%s'.", corto_fullname(t, id));
            goto error;
            break;
        }
        }
        break;
    case CORTO_BINARY:
    case CORTO_UINTEGER:
        strcpy(buff, "uint");
        appendWidth = TRUE;
        appendT = TRUE;
        break;
    case CORTO_INTEGER:
        strcpy(buff, "int");
        appendWidth = TRUE;
        appendT = TRUE;
        break;
    case CORTO_FLOAT:
        switch(t->width) {
        case CORTO_WIDTH_32:
            strcpy(buff, "float");
            break;
        case CORTO_WIDTH_64:
            strcpy(buff, "double");
            break;
        default: {
            corto_id id;
            corto_error("c_typePrimitivePlatformType: unsupported width for floating point type '%s'", corto_fullname(t, id));
            goto error;
            break;
        }
        }
        break;
    case CORTO_ENUM:
    case CORTO_BITMASK:
        corto_error("c_typePrimitivePlatformType: enumeration\\bitmasks types must be defined using the 'enum' keyword.");
        goto error;
        break;
    case CORTO_TEXT:
        strcpy(buff, "char*");
        break;
    }

    /* Append width */
    if(appendWidth) {
        switch(t->width) {
        case CORTO_WIDTH_8:
            strcat(buff, "8");
            break;
        case CORTO_WIDTH_16:
            strcat(buff, "16");
            break;
        case CORTO_WIDTH_32:
            strcat(buff, "32");
            break;
        case CORTO_WIDTH_64:
            strcat(buff, "64");
            break;
        case CORTO_WIDTH_WORD:
            strcat(buff, "ptr");
            break;
        }
    }

    /* Append _t */
    if(appendT) {
        strcat(buff, "_t");
    }
    
    return buff;
error:
    return NULL;
}

/* Convert string to upper. */
/*static corto_string cpp_toUpper(corto_string str, corto_id buffer) {
    corto_char *ptr, *bptr, ch;

    ptr = str;
    bptr = buffer;
    while((ch = *ptr)) {
        if(ch >= 97) {
            ch -= 32;
        }
        *bptr = ch;
        bptr++;
        ptr++;
    }
    *bptr = '\0';

    return buffer;
}*/

/* Translate constant to C++ language id */
corto_char* cpp_constantId(corto_generator g, corto_constant* c, corto_char* buffer) {
	CORTO_UNUSED(g);

    sprintf(buffer, "%s", corto_nameof(c));

    return buffer;
}

/* Parse type into C-specifier */
corto_char* cpp_specifierId(corto_generator g, corto_type t, corto_id specifier) {

    /* Check if object is scoped */
    if(corto_checkAttr(t, CORTO_ATTR_SCOPED)) {
        if ((t->kind == CORTO_PRIMITIVE) && (corto_primitive(t)->kind == CORTO_TEXT)) {
            strcpy(specifier, "std::string");
        } else if ((t->kind == CORTO_PRIMITIVE) && (corto_primitive(t)->kind == CORTO_BOOLEAN)) {
            strcpy(specifier, "bool");
        } else if ((t->kind == CORTO_VOID) && !t->reference) {
            strcpy(specifier, "void");
        } else {
            g_fullOid(g, t, specifier);
        }
    }else {
        if(t != corto_type(t)) {
            corto_error("c_type: anonymous typedefs are not allowed.");
            goto error;
        }

        switch(corto_type(t)->kind) {
        case CORTO_PRIMITIVE:
            cpp_primitiveId(corto_primitive(t), specifier);
            break;
        case CORTO_COLLECTION: {
            corto_id _specifier;
            corto_type elementType;
            g_idKind prev;

            prev = g_setIdKind(g, CORTO_GENERATOR_ID_CLASS_LOWER);

            elementType = corto_collection(t)->elementType;
            switch(corto_collection(t)->kind) {
            case CORTO_ARRAY:
                /* Get specifier of elementType */
                if(!cpp_specifierId(g, corto_collection(t)->elementType, _specifier)) {
                    goto error;
                }
                if((elementType->kind == CORTO_COLLECTION) && (corto_collection(elementType)->kind == CORTO_ARRAY)) {
                    sprintf(specifier, "%s_%d", _specifier, corto_collection(t)->max);
                }else {
                    sprintf(specifier, "%s_array%d", _specifier, corto_collection(t)->max);
                }
                break;
            case CORTO_SEQUENCE:
                /* Get specifier of elementType */
                if(!cpp_specifierId(g, corto_collection(t)->elementType, _specifier)) {
                    goto error;
                }
                if((elementType->kind == CORTO_COLLECTION) && (corto_collection(elementType)->kind == CORTO_SEQUENCE)) {
                    sprintf(specifier, "%s_%d", _specifier, corto_collection(t)->max);
                }else {
                    if(corto_collection(t)->max) {
                        sprintf(specifier, "%s_seq%d", _specifier, corto_collection(t)->max);
                    }else {
                        sprintf(specifier, "%s_seq", _specifier);
                    }
                }
                break;
            case CORTO_LIST:
                if(!cpp_specifierId(g, corto_collection(t)->elementType, _specifier)) {
                    goto error;
                }
                sprintf(specifier, "corto::list<%s>", _specifier);
                break;
            case CORTO_MAP:
                sprintf(specifier, "corto::map<void, void>");
                break;
            }

            g_setIdKind(g, prev);
            break;
        }
        default:
            corto_error("c_type: anonymous type of kind '%s' not allowed.", corto_nameof(corto_enum_constant(corto_typeKind_o, corto_type(t)->kind)));
            goto error;
            break;
        }
    }

    return specifier;
error:
    return NULL;
}

/* Parse type to Cpp name (for use in declarations) */
corto_char* cpp_specifierDecl(corto_generator g, corto_type t, corto_char* specifier) {
    corto_id spec;
    corto_char *ptr;

    /* Get the complete specifier */
    cpp_specifierId(g, t, spec);

    /* Strip the scope */
    ptr = spec + strlen(spec);
    while((*ptr != ':')) {
        ptr--;
    }
    ptr++;
    strcpy(specifier, ptr);
    return specifier;
}

/* Translate a scope to a path */
corto_char* cpp_topath(corto_object o, corto_id id) {
	corto_uint32 offset;
	corto_char ch, *ptr;
	corto_fullname(o, id);

	ptr = id+2;
	offset = 2;
	while((ch = *ptr)) {
		switch(ch) {
		case ':':
			*(ptr-offset) = '/';
			ptr++;
			offset++;
			break;
		default:
			*(ptr-offset) = *ptr;
			break;
		}
		ptr++;
	}
	*(ptr-offset) = '\0';

	return id;
}

static void cpp_escapeParameters(corto_char *ptr) {
	corto_char ch;
	corto_uint32 offset = 0;
	while((ch = *ptr)) {
		switch(ch) {
		case '(':
		case '{':
		case ',':
			*(ptr-offset) = '_';
			break;
		case ')':
		case '}':
			offset++;
			break;
		case ':':
			*(ptr-offset) = '_';
			offset++;
			break;
		case ' ':
			*(ptr-offset) = '_';
			break;
		default:
			*(ptr-offset) = ch;
			break;
		}
		ptr++;
	}
	*(ptr - offset) = '\0';
}

const corto_char *cpp_metaPostfix(cpp_metaIdKind kind) {\
	corto_char* postfix = NULL;
	switch(kind) {
	case CPP_DEFAULT:
		postfix = "";
		break;
	case CPP_HANDLE:
		postfix = "_h";
		break;
	case CPP_OBJECT:
		postfix = "_o";
		break;
	default:
		corto_assert(0, "invalid metaIdKind (%d)", kind);
		break;
	}

	return postfix;
}

/* Get meta-object identifier */
corto_char* cpp_metaFullname(corto_generator g, corto_object o, cpp_metaIdKind kind, corto_id id) {
	corto_char *ptr;
	const corto_char *postfix;
	g_idKind prev;

	postfix = cpp_metaPostfix(kind);
	prev = g_setIdKind(g, CORTO_GENERATOR_ID_DEFAULT);

	if(o != root_o) {
		if(cpp_nativeType(corto_parentof(o))) {
		    corto_id tmp;
			g_fullOid(g, corto_parentof(corto_parentof(o)), id);
			strcat(id, "::");
			strcat(id, g_oid(g, corto_parentof(o), tmp));
			strcat(id, "_");
			strcat(id, g_oid(g, o, tmp));
		}else {
			g_fullOidExt(g, o, id, CORTO_GENERATOR_ID_DEFAULT);
		}

		if((ptr = strchr(id, '('))) {
			if(!corto_function(o)->overloaded) {
				*ptr = '\0';
			}else {
				cpp_escapeParameters(ptr);
			}
		}

		strcat(id, postfix);
	}else {
		strcpy(id, "::root");
		strcat(id, postfix);
	}

    /* Reset ID-kind */
    g_setIdKind(g, prev);

	return id;
}

/* Get meta-object identifier */
corto_char* cpp_metaName(corto_generator g, corto_object o, cpp_metaIdKind kind, corto_id id) {
	corto_char *ptr;
	const corto_char *postfix;
	g_idKind prev;

	postfix = cpp_metaPostfix(kind);
	prev = g_setIdKind(g, CORTO_GENERATOR_ID_DEFAULT);

	if(o != root_o) {
        corto_id tmp;
		if(cpp_nativeType(corto_parentof(o))) {
			g_oid(g, corto_parentof(o), id);
			strcat(id, "_");
			strcat(id, g_oid(g, o, tmp));
		}else {
			g_id(g, g_oid(g, o, tmp), id);
		}

		if((ptr = strchr(id, '('))) {
			if(!corto_function(o)->overloaded) {
				*ptr = '\0';
			}else {
				cpp_escapeParameters(ptr);
			}
		}

		strcat(id, postfix);
	}else {
		strcpy(id, "root");
		strcat(id, postfix);
	}

	/* Reset ID-kind */
	g_setIdKind(g, prev);

	return id;
}

/* Get procedure id (without parameterlist */
corto_char* cpp_procId(corto_generator g, corto_function o, corto_id id) {
    corto_char *ptr;
    g_oid(g, o, id);
    ptr = strchr(id, '(');
    if(ptr) {
        *ptr = '\0';
    }
    return id;
}

