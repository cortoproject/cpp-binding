/*
 * c_common.h
 *
 *  Created on: Dec 21, 2012
 *      Author: sander
 */

#ifndef C_COMMON_H_
#define C_COMMON_H_

#include "corto.h"

#ifdef __cplusplus
extern "c" {
#endif

/* Translate id to C-id */
corto_string corto_genId(corto_string str, corto_id id);

/* Return string with C type for primitive */
corto_char* cpp_primitiveId(corto_primitive t, corto_char* buff);

/* Parse type into C-specifier */
corto_char* cpp_specifierId(corto_generator g, corto_type t, corto_char* specifier);
corto_char* cpp_specifierDecl(corto_generator g, corto_type t, corto_char* specifier);

/* Translate constant to C-language id */
corto_char* cpp_constantId(corto_generator g, corto_constant* c, corto_char* buffer);

/* Open a scope */
void cpp_openScope(g_file file, corto_object o);
void cpp_closeScope(g_file file);

/* Translate a scope to a path */
corto_char* cpp_topath(corto_object o, corto_id id);

typedef enum cpp_metaIdKind {
	CPP_DEFAULT,
	CPP_HANDLE,
	CPP_OBJECT
}cpp_metaIdKind;

/* Get meta-object identifier */
corto_char* cpp_metaFullname(corto_generator g, corto_object o, cpp_metaIdKind kind, corto_id id);

/* Get meta-object identifier */
corto_char* cpp_metaName(corto_generator g, corto_object o, cpp_metaIdKind kind, corto_id id);

/* Get procedure id (without parameterlist */
corto_char* cpp_procId(corto_generator g, corto_function o, corto_id id);

#ifdef __cplusplus
}
#endif

#endif /* C_COMMON_H_ */
