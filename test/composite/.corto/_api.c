/* _api.c
 *
 * API convenience functions for C-language.
 * This file contains generated code. Do not modify!
 */

#include <test.h>
test_Struct _test_StructCreate(corto_uint32 assertCount, corto_bool updated) {
    test_Struct _this;
    _this = test_Struct(corto_declare(test_Struct_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_SuiteData)_this)->assertCount = assertCount;
        ((test_Struct)_this)->updated = updated;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

test_Struct _test_StructCreateChild(corto_object _parent, corto_string _id, corto_uint32 assertCount, corto_bool updated) {
    test_Struct _this;
    _this = test_Struct(corto_declareChild(_parent, _id, test_Struct_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_SuiteData)_this)->assertCount = assertCount;
        ((test_Struct)_this)->updated = updated;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _test_StructUpdate(test_Struct _this, corto_uint32 assertCount, corto_bool updated) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((test_SuiteData)((test_Struct)CORTO_OFFSET(_this, ((corto_type)test_Struct_o)->size)))->assertCount = assertCount;
            ((test_Struct)((test_Struct)CORTO_OFFSET(_this, ((corto_type)test_Struct_o)->size)))->updated = updated;
        } else {
            ((test_SuiteData)_this)->assertCount = assertCount;
            ((test_Struct)_this)->updated = updated;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

test_Struct _test_StructDeclare(void) {
    test_Struct _this;
    _this = test_Struct(corto_declare(test_Struct_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

test_Struct _test_StructDeclareChild(corto_object _parent, corto_string _id) {
    test_Struct _this;
    _this = test_Struct(corto_declareChild(_parent, _id, test_Struct_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _test_StructDefine(test_Struct _this, corto_uint32 assertCount, corto_bool updated) {
    CORTO_UNUSED(_this);
    ((test_SuiteData)_this)->assertCount = assertCount;
    ((test_Struct)_this)->updated = updated;
    return corto_define(_this);
}

test_Struct _test_StructAssign(test_Struct _this, corto_uint32 assertCount, corto_bool updated) {
    CORTO_UNUSED(_this);
    ((test_SuiteData)_this)->assertCount = assertCount;
    ((test_Struct)_this)->updated = updated;
    return _this;
}

corto_string _test_StructStr(test_Struct value) {
    corto_string result;
    corto_value v;
    v = corto_value_object(value, corto_type(test_Struct_o));
    result = corto_strv(&v, 0);
    return result;
}

test_Struct test_StructFromStr(test_Struct value, corto_string str) {
    corto_fromStrp(&value, corto_type(test_Struct_o), str);
    return value;
}

corto_equalityKind _test_StructCompare(test_Struct dst, test_Struct src) {
    return corto_compare(dst, src);
}

test_StructInheritType* _test_StructInheritTypeCreate(corto_int32 x, corto_int32 y, corto_int32 z) {
    test_StructInheritType* _this;
    _this = test_StructInheritType(corto_declare(test_StructInheritType_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_StructType*)_this)->x = x;
        ((test_StructType*)_this)->y = y;
        ((test_StructInheritType*)_this)->z = z;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

test_StructInheritType* _test_StructInheritTypeCreateChild(corto_object _parent, corto_string _id, corto_int32 x, corto_int32 y, corto_int32 z) {
    test_StructInheritType* _this;
    _this = test_StructInheritType(corto_declareChild(_parent, _id, test_StructInheritType_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_StructType*)_this)->x = x;
        ((test_StructType*)_this)->y = y;
        ((test_StructInheritType*)_this)->z = z;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _test_StructInheritTypeUpdate(test_StructInheritType* _this, corto_int32 x, corto_int32 y, corto_int32 z) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((test_StructType*)((test_StructInheritType*)CORTO_OFFSET(_this, ((corto_type)test_StructInheritType_o)->size)))->x = x;
            ((test_StructType*)((test_StructInheritType*)CORTO_OFFSET(_this, ((corto_type)test_StructInheritType_o)->size)))->y = y;
            ((test_StructInheritType*)((test_StructInheritType*)CORTO_OFFSET(_this, ((corto_type)test_StructInheritType_o)->size)))->z = z;
        } else {
            ((test_StructType*)_this)->x = x;
            ((test_StructType*)_this)->y = y;
            ((test_StructInheritType*)_this)->z = z;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

test_StructInheritType* _test_StructInheritTypeDeclare(void) {
    test_StructInheritType* _this;
    _this = test_StructInheritType(corto_declare(test_StructInheritType_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

test_StructInheritType* _test_StructInheritTypeDeclareChild(corto_object _parent, corto_string _id) {
    test_StructInheritType* _this;
    _this = test_StructInheritType(corto_declareChild(_parent, _id, test_StructInheritType_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _test_StructInheritTypeDefine(test_StructInheritType* _this, corto_int32 x, corto_int32 y, corto_int32 z) {
    CORTO_UNUSED(_this);
    ((test_StructType*)_this)->x = x;
    ((test_StructType*)_this)->y = y;
    ((test_StructInheritType*)_this)->z = z;
    return corto_define(_this);
}

test_StructInheritType* _test_StructInheritTypeAssign(test_StructInheritType* _this, corto_int32 x, corto_int32 y, corto_int32 z) {
    CORTO_UNUSED(_this);
    ((test_StructType*)_this)->x = x;
    ((test_StructType*)_this)->y = y;
    ((test_StructInheritType*)_this)->z = z;
    return _this;
}

corto_string _test_StructInheritTypeStr(test_StructInheritType* value) {
    corto_string result;
    corto_value v;
    v = corto_value_value(corto_type(test_StructInheritType_o), value);
    result = corto_strv(&v, 0);
    return result;
}

test_StructInheritType* test_StructInheritTypeFromStr(test_StructInheritType* value, corto_string str) {
    corto_fromStrp(&value, corto_type(test_StructInheritType_o), str);
    return value;
}

corto_equalityKind test_StructInheritTypeCompare(test_StructInheritType* dst, test_StructInheritType* src) {
    return corto_comparep(dst, test_StructInheritType_o, src);
}

corto_int16 _test_StructInheritTypeInit(test_StructInheritType* value) {
    corto_int16 result;
    memset(value, 0, corto_type(test_StructInheritType_o)->size);
    corto_value v;
    v = corto_value_value(corto_type(test_StructInheritType_o), value);
    result = corto_initv(&v);
    return result;
}

corto_int16 _test_StructInheritTypeDeinit(test_StructInheritType* value) {
    corto_int16 result;
    corto_value v;
    v = corto_value_value(corto_type(test_StructInheritType_o), value);
    result = corto_deinitv(&v);
    return result;
}

test_StructType* _test_StructTypeCreate(corto_int32 x, corto_int32 y) {
    test_StructType* _this;
    _this = test_StructType(corto_declare(test_StructType_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_StructType*)_this)->x = x;
        ((test_StructType*)_this)->y = y;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

test_StructType* _test_StructTypeCreateChild(corto_object _parent, corto_string _id, corto_int32 x, corto_int32 y) {
    test_StructType* _this;
    _this = test_StructType(corto_declareChild(_parent, _id, test_StructType_o));
    if (!_this) {
        return NULL;
    }
    if (!corto_checkState(_this, CORTO_DEFINED)) {
        ((test_StructType*)_this)->x = x;
        ((test_StructType*)_this)->y = y;
        if (corto_define(_this)) {
            corto_release(_this);
            _this = NULL;
        }
    }
    return _this;
}

corto_int16 _test_StructTypeUpdate(test_StructType* _this, corto_int32 x, corto_int32 y) {
    CORTO_UNUSED(_this);
    if (!corto_updateBegin(_this)) {
        if ((corto_typeof(corto_typeof(_this)) == (corto_type)corto_target_o) && !corto_owned(_this)) {
            ((test_StructType*)((test_StructType*)CORTO_OFFSET(_this, ((corto_type)test_StructType_o)->size)))->x = x;
            ((test_StructType*)((test_StructType*)CORTO_OFFSET(_this, ((corto_type)test_StructType_o)->size)))->y = y;
        } else {
            ((test_StructType*)_this)->x = x;
            ((test_StructType*)_this)->y = y;
        }
        corto_updateEnd(_this);
    } else {
        return -1;
    }
    return 0;
}

test_StructType* _test_StructTypeDeclare(void) {
    test_StructType* _this;
    _this = test_StructType(corto_declare(test_StructType_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

test_StructType* _test_StructTypeDeclareChild(corto_object _parent, corto_string _id) {
    test_StructType* _this;
    _this = test_StructType(corto_declareChild(_parent, _id, test_StructType_o));
    if (!_this) {
        return NULL;
    }
    return _this;
}

corto_int16 _test_StructTypeDefine(test_StructType* _this, corto_int32 x, corto_int32 y) {
    CORTO_UNUSED(_this);
    ((test_StructType*)_this)->x = x;
    ((test_StructType*)_this)->y = y;
    return corto_define(_this);
}

test_StructType* _test_StructTypeAssign(test_StructType* _this, corto_int32 x, corto_int32 y) {
    CORTO_UNUSED(_this);
    ((test_StructType*)_this)->x = x;
    ((test_StructType*)_this)->y = y;
    return _this;
}

corto_string _test_StructTypeStr(test_StructType* value) {
    corto_string result;
    corto_value v;
    v = corto_value_value(corto_type(test_StructType_o), value);
    result = corto_strv(&v, 0);
    return result;
}

test_StructType* test_StructTypeFromStr(test_StructType* value, corto_string str) {
    corto_fromStrp(&value, corto_type(test_StructType_o), str);
    return value;
}

corto_equalityKind test_StructTypeCompare(test_StructType* dst, test_StructType* src) {
    return corto_comparep(dst, test_StructType_o, src);
}

corto_int16 _test_StructTypeInit(test_StructType* value) {
    corto_int16 result;
    memset(value, 0, corto_type(test_StructType_o)->size);
    corto_value v;
    v = corto_value_value(corto_type(test_StructType_o), value);
    result = corto_initv(&v);
    return result;
}

corto_int16 _test_StructTypeDeinit(test_StructType* value) {
    corto_int16 result;
    corto_value v;
    v = corto_value_value(corto_type(test_StructType_o), value);
    result = corto_deinitv(&v);
    return result;
}

