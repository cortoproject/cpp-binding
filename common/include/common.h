
#ifndef COMMON_H
#define COMMON_H

/* Add include files here */
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

char* _cpp_typeIdentifier(g_generator g, corto_type t, cpp_context context, cpp_refKind refKind, corto_id buffer);
g_file cpp_headerOpen(g_generator g, corto_object o);
void cpp_headerClose(g_generator g, g_file file);

g_file cpp_sourceOpen(g_generator g, corto_object o);
void cpp_sourceClose(g_generator g, g_file file);

#define cpp_typeIdentifier(g, t, context, refKind, buffer) _cpp_typeIdentifier(g, corto_type(t), context, refKind, buffer)

#ifdef __cplusplus
}
#endif

#endif /* COMMON_H */
