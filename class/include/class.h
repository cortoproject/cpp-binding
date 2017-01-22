/* class.h
 *
 * This file is generated. Do not modify.
 */

#ifndef CORTO_GEN_CPP_CLASS_H
#define CORTO_GEN_CPP_CLASS_H

#include <corto/corto.h>

/* $header() */
typedef struct cpp_classWalk_t {
    g_generator g;
    g_file mainheader;
    g_file mainsource;
    g_file hiddenImpl;
    g_file header;
    g_file source;
} cpp_classWalk_t;

corto_int16 cpp_fluentDecl(corto_type type, cpp_classWalk_t *data);
/* $end */

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif
#endif
