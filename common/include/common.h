
#ifndef COMMON_H
#define COMMON_H

/* Add include files here */
#include "corto/g/g.h"
#include <corto/gen/c/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum cpp_context {
    Cpp_Member,
    Cpp_Parameter,
    Cpp_Return,
} cpp_context;

typedef enum cpp_refKind {
    Cpp_ByVal,
    Cpp_ByCVal,
    Cpp_ByRef,
    Cpp_ByCRef
} cpp_refKind;

char* _cpp_typeId(g_generator g, corto_type t, cpp_context context, cpp_refKind refKind, corto_id buffer);
char* cpp_varId(g_generator g, corto_object o, corto_id buffer);

char* cpp_mainheader(g_generator g, corto_id header);
void cpp_include(g_generator g, g_file file, corto_object o);

g_file cpp_headerOpen(g_generator g, corto_object o);
void cpp_headerClose(g_generator g, g_file file);

g_file cpp_sourceOpen(g_generator g, corto_object o);
void cpp_sourceClose(g_generator g, g_file file);

/* Open & close namespaces. Used for C++ compatibility */
void cpp_openScope(g_file file, corto_object o);
void cpp_closeScope(g_file file);

char *cpp_cprefix(void);

#define cpp_typeId(g, t, context, refKind, buffer) _cpp_typeId(g, corto_type(t), context, refKind, buffer)

#ifdef __cplusplus
}
#endif

#endif /* COMMON_H */
