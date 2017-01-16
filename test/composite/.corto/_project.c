/* _project.c
 *
 * This file is generated. Do not modify.
 */

#include <test.h>
#include <_project.h>

int testMain(int argc, char* argv[]);

int test_load(void);

#ifdef __cplusplus
extern "C"
#endif
TEST_EXPORT int cortomain(int argc, char* argv[]) {
    if (test_load()) return -1;
    if (testMain(argc, argv)) return -1;
    return 0;
}

