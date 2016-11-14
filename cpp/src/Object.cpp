
#include <corto/cpp/Object.h>

namespace corto {

std::string CoreApi::idof() {
    return std::string(corto_idof(m_handle));
}

Object CoreApi::parentof() {
    return Object(corto_parentof(m_handle));
}

Object CoreApi::typeof() {
    return Object(corto_typeof(m_handle));
}

std::string CoreApi::contentof(std::string contentType) {
    return std::string(corto_contentof(NULL, (corto_string)contentType.c_str(), m_handle));
}

Object::Object() : CoreApi(NULL), corto(this), m_handle(NULL), m_ptr(NULL) {
    fprintf(stderr, "%p: construct()\n", this);
}

Object::Object(corto_object handle) : CoreApi(handle), corto(this), m_handle(NULL), m_ptr(handle) {
    corto_setref(&m_handle, handle);
    fprintf(stderr, "%p: construct(handle = %p // %s)\n", this, handle, corto_fullpath(NULL, m_handle));
}

Object::Object(corto_object handle, void *ptr) : CoreApi(handle), corto(this), m_handle(NULL), m_ptr(ptr) {
    corto_setref(&m_handle, handle);
    fprintf(stderr, "%p: construct(handle = %p, ptr = %p)\n", this, handle, ptr);
}

Object::Object(Object& obj) : CoreApi(obj.handle()), corto(this), m_handle(NULL), m_ptr(obj.handle()) {
    corto_setref(&m_handle, obj.handle());
    fprintf(stderr, "%p: construct(Object& %p) => handle = %p // %s, ptr = %p\n", this, &obj, m_handle, corto_fullpath(NULL, m_handle), m_ptr);
}

Object::Object(Object&& obj) : CoreApi(obj.handle()), corto(this), m_handle(NULL) {
    corto_setref(&m_handle, obj.handle());
    fprintf(stderr, "%p: construct(Object&& %p) => handle = %p, ptr = %p\n", this, &obj, m_handle, m_ptr);
}

Object::~Object() {
    if (m_handle) {
        fprintf(stderr, "%p: destruct() => handle = %p (%d), ptr = %p\n", this, m_handle, corto_countof(m_handle), m_ptr);
        corto_release(m_handle);
    }
}

corto_object Object::handle() {
    return m_handle;
}

void Object::handle(corto_object obj) {
    fprintf(stderr, "%p: handle() = %p // %s\n", this, obj, corto_fullpath(NULL, obj));
    corto_setref(&m_handle, obj);
    this->ptr(obj);
}

void* Object::ptr() {
    return m_ptr;
}

void Object::ptr(void* ptr) {
    m_ptr = ptr;
}

corto_object Object_t::create(corto_type type, void *value) {
    corto_object result = corto_declare(type);
    corto_copyp(result, type, value);
    corto_define(result);
    _obj.handle(result);
    corto_release(result);
    return result;
}

corto_object Object_t::createChild(corto::Object parent, std::string id, corto_type type, void *value) {
    corto_object result = corto_declareChild(parent.handle(), (corto_string)id.c_str(), type);
    corto_copyp(result, type, value);
    corto_define(result);
    _obj.handle(result);
    corto_release(result);
    return result;
}

void Object_t::update(void *value) {
    corto_updateBegin(_obj.handle());
    corto_copyp(_obj.handle(), _obj.corto->typeof().handle(), value);
    corto_updateEnd(_obj.handle());
}

}
