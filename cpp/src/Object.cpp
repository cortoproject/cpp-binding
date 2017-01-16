
#include <corto/cpp/cpp.h>
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
    corto_debug("cpp: %p: construct()\n", this);
}

Object::Object(corto_object handle) : CoreApi(handle), corto(*this), m_handle(NULL), m_ptr(handle) {
    corto_setref(&m_handle, handle);
    corto_debug("cpp: %p: construct(handle = %p // %s)\n", this, handle, corto_fullpath(NULL, m_handle));
}

Object::Object(corto_object handle, void *ptr) : CoreApi(handle), corto(*this), m_handle(NULL), m_ptr(ptr) {
    corto_setref(&m_handle, handle);
    corto_debug("cpp: %p: construct(handle = %p, ptr = %p)\n", this, handle, ptr);
}

Object::Object(const Object& obj) : CoreApi(obj.m_handle), corto(*this), m_handle(NULL), m_ptr(obj.m_ptr) {
    corto_setref(&m_handle, obj.m_handle);
    corto_debug("cpp: %p: construct(Object& %p) => handle = %p // %s, ptr = %p\n", this, &obj, m_handle, corto_fullpath(NULL, m_handle), m_ptr);
}

Object::Object(const Object&& obj) : CoreApi(obj.m_handle), corto(*this), m_handle(NULL), m_ptr(obj.m_ptr) {
    corto_setref(&m_handle, obj.m_handle);
    corto_debug("cpp: %p: construct(Object&& %p) => handle = %p, ptr = %p\n", this, &obj, m_handle, m_ptr);
}

Object Object::operator=(Object obj) {
    return Object(obj.m_handle, obj.m_ptr);
}

Object::~Object() {
    corto_debug("cpp: %p: destruct() => handle = %p, ptr = %p\n", this, m_handle, m_ptr);
    if (m_handle) {
        corto_release(m_handle);
    }
}

corto_object Object::handle() {
    return m_handle;
}

void Object::handle(corto_object obj) {
    corto_debug("cpp: %p: handle() = %p // %s\n", this, obj, corto_fullpath(NULL, obj));
    corto_setref(&m_handle, obj);
    this->ptr(obj);
}

void* Object::ptr() {
    return m_ptr;
}

void Object::ptr(void* ptr) {
    m_ptr = ptr;
}

corto_object Object_fluentAPI::declare(corto_type type) {
    corto_object result = corto_declare(type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    return result;
}

corto_object Object_fluentAPI::create(corto_type type, void *value) {
    corto_object result = corto_declare(type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_copyp(result, type, value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_define(result)) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    return result;
}

corto_object Object_fluentAPI::declareChild(corto::Object parent, std::string id, corto_type type) {
    corto_object result = corto_declareChild(parent.handle(), (corto_string)id.c_str(), type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    return result;
}

corto_object Object_fluentAPI::createChild(corto::Object parent, std::string id, corto_type type, void *value) {
    corto_object result = corto_declareChild(parent.handle(), (corto_string)id.c_str(), type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_copyp(result, type, value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_define(result)) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    return result;
}

void Object_fluentAPI::define(void *value) {
    if (corto_copyp(m_ptr, corto_typeof(m_ptr), value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_define(m_ptr)) {
        throw corto::exception(corto_lasterr());
    }
}

void Object_fluentAPI::update(void *value) {
    if (corto_updateBegin(m_ptr)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_copyp(m_ptr, corto_typeof(m_ptr), value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_updateEnd(m_ptr)) {
        throw corto::exception(corto_lasterr());
    }
}

void Object_fluentAPI::fromcontent(std::string contentType, std::string content) {
    corto_value v = corto_value_value(this->m_type, m_ptr);
    if (corto_value_fromcontent(&v, (corto_string)contentType.c_str(), (corto_string)content.c_str())) {
        throw corto::exception(corto_lasterr());
    }
    printf("%s %d\n", corto_value_contentof(&v, "text/corto"), *(corto_uint32*)m_ptr);
}

}
