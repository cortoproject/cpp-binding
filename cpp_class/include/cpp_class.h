/*
 * cpp_classImpl.h
 *
 *  Created on: Dec 27, 2012
 *      Author: sander
 */

#ifndef CPP_CLASS_H_
#define CPP_CLASS_H_

#include "corto.h"

#ifdef __cplusplus
extern "C" {
#endif

int cpp_impl(corto_object o, corto_generator g);
void cpp_constructorDecl(corto_generator g, g_file file, corto_interface o, corto_bool inlined);
void cpp_constructorScopedDecl(corto_generator g, g_file file, corto_interface o, corto_bool inlined);
void cpp_handleGetDecl(corto_generator g, g_file file, corto_interface o, corto_bool inlined);
void cpp_functionDecl(corto_generator g, g_file file, corto_function o, corto_bool inlined);
void cpp_functionDeclExt(corto_generator g, g_file file, corto_function o, corto_bool inlined, corto_bool virtualStub);
void cpp_memberGetter(corto_generator g, g_file file, corto_member o, corto_bool inlined);
void cpp_memberSetter(corto_generator g, g_file file, corto_member o, corto_bool inlined);
struct corto_serializer_s cpp_memberCountSerializer(void);

#ifdef __cplusplus
}
#endif

#endif /* CPP_CLASS_H_ */
