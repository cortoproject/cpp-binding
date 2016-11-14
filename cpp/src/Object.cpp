
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

Object::Object() : CoreApi(NULL), corto(*this), m_handle(NULL), m_ptr(NULL) {
}

Object::Object(corto_object handle) : CoreApi(handle), corto(*this), m_handle(NULL), m_ptr(handle) {
    corto_setref(&m_handle, handle);
}

Object::Object(corto_object handle, void *ptr) : CoreApi(handle), corto(*this), m_handle(NULL), m_ptr(ptr) {
    corto_setref(&m_handle, handle);
}

Object::Object(const Object& obj) : CoreApi(obj.m_handle), corto(*this), m_handle(NULL), m_ptr(obj.m_ptr) {
    corto_setref(&m_handle, obj.m_handle);
}

Object::Object(const Object&& obj) : CoreApi(obj.m_handle), corto(*this), m_handle(NULL), m_ptr(obj.m_ptr) {
    corto_setref(&m_handle, obj.m_handle);
}

Object Object::operator=(Object obj) {
    return Object(obj.m_handle, obj.m_ptr);
}

Object::~Object() {
    if (m_handle) {
        corto_release(m_handle);
    }
}

corto_object Object::handle() {
    return m_handle;
}

void Object::handle(corto_object obj) {
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
    this->_obj = Object(result);
    return result;
}

corto_object Object_t::createChild(corto::Object parent, std::string id, corto_type type, void *value) {
    corto_object result = corto_declareChild(parent.handle(), (corto_string)id.c_str(), type);
    corto_copyp(result, type, value);
    corto_define(result);
    this->_obj = Object(result);
    return result;
}

void Object_t::update(void *value) {
    corto_updateBegin(_obj.handle());
    corto_copyp(_obj.handle(), _obj.corto.typeof().handle(), value);
    corto_updateEnd(_obj.handle());
}

}
