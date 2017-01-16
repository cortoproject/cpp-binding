/* _load.c
 *
 * Loads objects in object store.
 * This file contains generated code. Do not modify!
 */

#include <test.h>

/* Forward declarations */

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_onUpdate(
    test_Struct _this,
    corto_eventMask event,
    corto_object object,
    corto_observer observer);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_create(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_createChild(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_declare(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_declareChild(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_define(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_function(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_member(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_method(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_update(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_Struct_tc_value(
    test_Struct _this);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_StructInheritType_add(
    test_StructInheritType* _this,
    test_StructInheritType *s);

#ifdef __cplusplus
extern "C"
#endif
corto_void _test_StructType_add(
    test_StructType* _this,
    test_StructType *s);

/* Variable definitions */
corto_package test_o;
test_Suite test_Struct_o;
corto_member test_Struct_updated_o;
corto_observer test_Struct_onUpdate_o;
test_Case test_Struct_tc_create_o;
test_Case test_Struct_tc_createChild_o;
test_Case test_Struct_tc_declare_o;
test_Case test_Struct_tc_declareChild_o;
test_Case test_Struct_tc_define_o;
test_Case test_Struct_tc_function_o;
test_Case test_Struct_tc_member_o;
test_Case test_Struct_tc_method_o;
test_Case test_Struct_tc_update_o;
test_Case test_Struct_tc_value_o;
corto_struct test_StructInheritType_o;
corto_member test_StructInheritType_z_o;
corto_struct test_StructType_o;
corto_member test_StructType_x_o;
corto_member test_StructType_y_o;
corto_method test_StructInheritType_add_o;
corto_method test_StructType_add_o;

/* Load objects in object store. */
int test_load(void) {
    corto_object _a_; /* Used for resolving anonymous objects */
    _a_ = NULL;

    corto_attr prevAttr = corto_setAttr(CORTO_ATTR_PERSISTENT);

    test_o = corto_package(corto_declareChild(root_o, "test", corto_package_o));
    if (!test_o) {
        corto_error("test_load: failed to declare 'test_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_o, CORTO_DEFINED)) {
        test_o->url = NULL;
        test_o->version = NULL;
        test_o->author = NULL;
        test_o->description = NULL;
        test_o->env = NULL;
        test_o->nocorto = FALSE;
        test_o->cflags = corto_llNew();
        test_o->dependencies = corto_llNew();
        test_o->prefix = NULL;
        test_o->cortoVersion = corto_llNew();
        test_o->local = FALSE;
        test_o->lib = corto_llNew();
        test_o->libpath = corto_llNew();
        test_o->include = corto_llNew();
        test_o->link = corto_llNew();
        if (corto_define(test_o)) {
            corto_error("test_load: failed to define 'test_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_o = test_Suite(corto_declareChild(test_o, "Struct", test_Suite_o));
    if (!test_Struct_o) {
        corto_error("test_load: failed to declare 'test_Struct_o' (%s)", corto_lasterr());
        goto error;
    }

    test_Struct_updated_o = corto_member(corto_declareChild(test_Struct_o, "updated", corto_member_o));
    if (!test_Struct_updated_o) {
        corto_error("test_load: failed to declare 'test_Struct_updated_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_updated_o, CORTO_DEFINED)) {
        test_Struct_updated_o->type = corto_type(corto_resolve(NULL, "bool"));
        test_Struct_updated_o->modifiers = 0x0;
        test_Struct_updated_o->state = 0x6;
        test_Struct_updated_o->weak = FALSE;
        test_Struct_updated_o->id = 0;
        if (corto_define(test_Struct_updated_o)) {
            corto_error("test_load: failed to define 'test_Struct_updated_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (!corto_checkState(test_Struct_o, CORTO_DEFINED)) {
        ((corto_type)test_Struct_o)->kind = CORTO_COMPOSITE;
        ((corto_type)test_Struct_o)->reference = TRUE;
        ((corto_type)test_Struct_o)->attr = 0x10;
        ((corto_type)test_Struct_o)->parentType = NULL;
        ((corto_type)test_Struct_o)->parentState = 0x6;
        ((corto_type)test_Struct_o)->defaultType = NULL;
        ((corto_type)test_Struct_o)->defaultProcedureType = NULL;
        ((corto_interface)test_Struct_o)->base = corto_interface(corto_resolve(NULL, "/corto/test/SuiteData"));
        ((corto_struct)test_Struct_o)->baseAccess = 0x0;
        ((corto_class)test_Struct_o)->implements.length = 0;
        ((corto_class)test_Struct_o)->implements.buffer = NULL;
        if (corto_define(test_Struct_o)) {
            corto_error("test_load: failed to define 'test_Struct_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(test_Struct_o)->size != sizeof(struct test_Struct_s)) {
        corto_error("test_load: calculated size '%d' of type 'test_Struct_o' doesn't match C-type size '%d'", corto_type(test_Struct_o)->size, sizeof(struct test_Struct_s));
    }

    test_Struct_onUpdate_o = corto_observer(corto_declareChild(test_Struct_o, "onUpdate", corto_observer_o));
    if (!test_Struct_onUpdate_o) {
        corto_error("test_load: failed to declare 'test_Struct_onUpdate_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_onUpdate_o, CORTO_DEFINED)) {
        test_Struct_onUpdate_o->mask = 0x10;
        test_Struct_onUpdate_o->observable = NULL;
        test_Struct_onUpdate_o->instance = NULL;
        test_Struct_onUpdate_o->dispatcher = NULL;
        test_Struct_onUpdate_o->type = NULL;
        test_Struct_onUpdate_o->enabled = FALSE;
        test_Struct_onUpdate_o->active = 0;
        
        corto_function(test_Struct_onUpdate_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_onUpdate_o)->fptr = (corto_word)_test_Struct_onUpdate;
        if (corto_define(test_Struct_onUpdate_o)) {
            corto_error("test_load: failed to define 'test_Struct_onUpdate_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_create_o = test_Case(corto_declareChild(test_Struct_o, "tc_create()", test_Case_o));
    if (!test_Struct_tc_create_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_create_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_create_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_create_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_create_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_create_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_create_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_create_o)->fptr = (corto_word)_test_Struct_tc_create;
        if (corto_define(test_Struct_tc_create_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_create_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_createChild_o = test_Case(corto_declareChild(test_Struct_o, "tc_createChild()", test_Case_o));
    if (!test_Struct_tc_createChild_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_createChild_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_createChild_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_createChild_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_createChild_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_createChild_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_createChild_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_createChild_o)->fptr = (corto_word)_test_Struct_tc_createChild;
        if (corto_define(test_Struct_tc_createChild_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_createChild_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_declare_o = test_Case(corto_declareChild(test_Struct_o, "tc_declare()", test_Case_o));
    if (!test_Struct_tc_declare_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_declare_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_declare_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_declare_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_declare_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_declare_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_declare_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_declare_o)->fptr = (corto_word)_test_Struct_tc_declare;
        if (corto_define(test_Struct_tc_declare_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_declare_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_declareChild_o = test_Case(corto_declareChild(test_Struct_o, "tc_declareChild()", test_Case_o));
    if (!test_Struct_tc_declareChild_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_declareChild_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_declareChild_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_declareChild_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_declareChild_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_declareChild_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_declareChild_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_declareChild_o)->fptr = (corto_word)_test_Struct_tc_declareChild;
        if (corto_define(test_Struct_tc_declareChild_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_declareChild_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_define_o = test_Case(corto_declareChild(test_Struct_o, "tc_define()", test_Case_o));
    if (!test_Struct_tc_define_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_define_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_define_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_define_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_define_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_define_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_define_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_define_o)->fptr = (corto_word)_test_Struct_tc_define;
        if (corto_define(test_Struct_tc_define_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_define_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_function_o = test_Case(corto_declareChild(test_Struct_o, "tc_function()", test_Case_o));
    if (!test_Struct_tc_function_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_function_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_function_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_function_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_function_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_function_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_function_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_function_o)->fptr = (corto_word)_test_Struct_tc_function;
        if (corto_define(test_Struct_tc_function_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_function_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_member_o = test_Case(corto_declareChild(test_Struct_o, "tc_member()", test_Case_o));
    if (!test_Struct_tc_member_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_member_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_member_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_member_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_member_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_member_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_member_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_member_o)->fptr = (corto_word)_test_Struct_tc_member;
        if (corto_define(test_Struct_tc_member_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_member_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_method_o = test_Case(corto_declareChild(test_Struct_o, "tc_method()", test_Case_o));
    if (!test_Struct_tc_method_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_method_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_method_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_method_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_method_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_method_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_method_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_method_o)->fptr = (corto_word)_test_Struct_tc_method;
        if (corto_define(test_Struct_tc_method_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_method_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_update_o = test_Case(corto_declareChild(test_Struct_o, "tc_update()", test_Case_o));
    if (!test_Struct_tc_update_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_update_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_update_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_update_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_update_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_update_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_update_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_update_o)->fptr = (corto_word)_test_Struct_tc_update;
        if (corto_define(test_Struct_tc_update_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_update_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_Struct_tc_value_o = test_Case(corto_declareChild(test_Struct_o, "tc_value()", test_Case_o));
    if (!test_Struct_tc_value_o) {
        corto_error("test_load: failed to declare 'test_Struct_tc_value_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_Struct_tc_value_o, CORTO_DEFINED)) {
        ((corto_function)test_Struct_tc_value_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_Struct_tc_value_o)->returnsReference = FALSE;
        ((corto_method)test_Struct_tc_value_o)->_virtual = FALSE;
        
        corto_function(test_Struct_tc_value_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_Struct_tc_value_o)->fptr = (corto_word)_test_Struct_tc_value;
        if (corto_define(test_Struct_tc_value_o)) {
            corto_error("test_load: failed to define 'test_Struct_tc_value_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_StructInheritType_o = corto_struct(corto_declareChild(test_o, "StructInheritType", corto_struct_o));
    if (!test_StructInheritType_o) {
        corto_error("test_load: failed to declare 'test_StructInheritType_o' (%s)", corto_lasterr());
        goto error;
    }

    test_StructInheritType_z_o = corto_member(corto_declareChild(test_StructInheritType_o, "z", corto_member_o));
    if (!test_StructInheritType_z_o) {
        corto_error("test_load: failed to declare 'test_StructInheritType_z_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_StructInheritType_z_o, CORTO_DEFINED)) {
        test_StructInheritType_z_o->type = corto_type(corto_resolve(NULL, "int32"));
        test_StructInheritType_z_o->modifiers = 0x0;
        test_StructInheritType_z_o->state = 0x6;
        test_StructInheritType_z_o->weak = FALSE;
        test_StructInheritType_z_o->id = 0;
        if (corto_define(test_StructInheritType_z_o)) {
            corto_error("test_load: failed to define 'test_StructInheritType_z_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_StructType_o = corto_struct(corto_declareChild(test_o, "StructType", corto_struct_o));
    if (!test_StructType_o) {
        corto_error("test_load: failed to declare 'test_StructType_o' (%s)", corto_lasterr());
        goto error;
    }

    test_StructType_x_o = corto_member(corto_declareChild(test_StructType_o, "x", corto_member_o));
    if (!test_StructType_x_o) {
        corto_error("test_load: failed to declare 'test_StructType_x_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_StructType_x_o, CORTO_DEFINED)) {
        test_StructType_x_o->type = corto_type(corto_resolve(NULL, "int32"));
        test_StructType_x_o->modifiers = 0x0;
        test_StructType_x_o->state = 0x6;
        test_StructType_x_o->weak = FALSE;
        test_StructType_x_o->id = 0;
        if (corto_define(test_StructType_x_o)) {
            corto_error("test_load: failed to define 'test_StructType_x_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_StructType_y_o = corto_member(corto_declareChild(test_StructType_o, "y", corto_member_o));
    if (!test_StructType_y_o) {
        corto_error("test_load: failed to declare 'test_StructType_y_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_StructType_y_o, CORTO_DEFINED)) {
        test_StructType_y_o->type = corto_type(corto_resolve(NULL, "int32"));
        test_StructType_y_o->modifiers = 0x0;
        test_StructType_y_o->state = 0x6;
        test_StructType_y_o->weak = FALSE;
        test_StructType_y_o->id = 1;
        if (corto_define(test_StructType_y_o)) {
            corto_error("test_load: failed to define 'test_StructType_y_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_StructInheritType_add_o = corto_method(corto_declareChild(test_StructInheritType_o, "add(/test/StructInheritType s)", corto_method_o));
    if (!test_StructInheritType_add_o) {
        corto_error("test_load: failed to declare 'test_StructInheritType_add_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_StructInheritType_add_o, CORTO_DEFINED)) {
        ((corto_function)test_StructInheritType_add_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_StructInheritType_add_o)->returnsReference = FALSE;
        test_StructInheritType_add_o->_virtual = FALSE;
        
        corto_function(test_StructInheritType_add_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_StructInheritType_add_o)->fptr = (corto_word)_test_StructInheritType_add;
        if (corto_define(test_StructInheritType_add_o)) {
            corto_error("test_load: failed to define 'test_StructInheritType_add_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    test_StructType_add_o = corto_method(corto_declareChild(test_StructType_o, "add(/test/StructType s)", corto_method_o));
    if (!test_StructType_add_o) {
        corto_error("test_load: failed to declare 'test_StructType_add_o' (%s)", corto_lasterr());
        goto error;
    }

    if (!corto_checkState(test_StructType_add_o, CORTO_DEFINED)) {
        ((corto_function)test_StructType_add_o)->returnType = corto_type(corto_resolve(NULL, "void"));
        ((corto_function)test_StructType_add_o)->returnsReference = FALSE;
        test_StructType_add_o->_virtual = FALSE;
        
        corto_function(test_StructType_add_o)->kind = CORTO_PROCEDURE_CDECL;
        corto_function(test_StructType_add_o)->fptr = (corto_word)_test_StructType_add;
        if (corto_define(test_StructType_add_o)) {
            corto_error("test_load: failed to define 'test_StructType_add_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (!corto_checkState(test_StructType_o, CORTO_DEFINED)) {
        ((corto_type)test_StructType_o)->kind = CORTO_COMPOSITE;
        ((corto_type)test_StructType_o)->reference = FALSE;
        ((corto_type)test_StructType_o)->attr = 0x10;
        ((corto_type)test_StructType_o)->parentType = NULL;
        ((corto_type)test_StructType_o)->parentState = 0x6;
        ((corto_type)test_StructType_o)->defaultType = NULL;
        ((corto_type)test_StructType_o)->defaultProcedureType = NULL;
        ((corto_interface)test_StructType_o)->base = NULL;
        test_StructType_o->baseAccess = 0x0;
        if (corto_define(test_StructType_o)) {
            corto_error("test_load: failed to define 'test_StructType_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(test_StructType_o)->size != sizeof(test_StructType)) {
        corto_error("test_load: calculated size '%d' of type 'test_StructType_o' doesn't match C-type size '%d'", corto_type(test_StructType_o)->size, sizeof(test_StructType));
    }

    if (!corto_checkState(test_StructInheritType_o, CORTO_DEFINED)) {
        ((corto_type)test_StructInheritType_o)->kind = CORTO_COMPOSITE;
        ((corto_type)test_StructInheritType_o)->reference = FALSE;
        ((corto_type)test_StructInheritType_o)->attr = 0x10;
        ((corto_type)test_StructInheritType_o)->parentType = NULL;
        ((corto_type)test_StructInheritType_o)->parentState = 0x6;
        ((corto_type)test_StructInheritType_o)->defaultType = NULL;
        ((corto_type)test_StructInheritType_o)->defaultProcedureType = NULL;
        ((corto_interface)test_StructInheritType_o)->base = corto_interface((corto_claim(test_StructType_o), test_StructType_o));
        test_StructInheritType_o->baseAccess = 0x0;
        if (corto_define(test_StructInheritType_o)) {
            corto_error("test_load: failed to define 'test_StructInheritType_o' (%s)", corto_lasterr());
            goto error;
        }
    }

    if (corto_type(test_StructInheritType_o)->size != sizeof(test_StructInheritType)) {
        corto_error("test_load: calculated size '%d' of type 'test_StructInheritType_o' doesn't match C-type size '%d'", corto_type(test_StructInheritType_o)->size, sizeof(test_StructInheritType));
    }

    corto_setAttr(prevAttr);

    if (_a_) {
        corto_release(_a_);
    }

    return 0;
error:
    if (_a_) {
        corto_release(_a_);
    }

    return -1;
}
