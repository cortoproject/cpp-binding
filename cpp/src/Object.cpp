
#include <corto/cpp/cpp.hpp>
#include <corto/cpp/Object.h>

namespace corto {

std::string CoreApi::idof() {
    return std::string(corto_idof(m_obj.ref()));
}

Object CoreApi::parentof() {
    return Object(corto_parentof(m_obj.ref()));
}

Object CoreApi::typeof() {
    return Object(corto_typeof(m_obj.ref()));
}

std::string CoreApi::contentof(std::string contentType) {
    corto_value v = corto_value_value(m_obj.type(), m_obj.ptr());
    corto_string s = corto_value_contentof(&v, (corto_string)contentType.c_str());
    std::string result = std::string(s);
    corto_dealloc(s);
    return result;
}

Object::Object() :
  CoreApi(*this),
  corto(*this),
  m_ref(NULL),
  m_ptr(NULL),
  m_type(NULL)
{
    corto_debug("cpp: %p: construct()\n", this);
}

Object::Object(corto_object ref) :
  CoreApi(*this),
  corto(*this),
  m_ref(NULL),
  m_ptr(ref),
  m_type(ref ? corto_typeof(ref) : NULL)
{
    corto_setref(&m_ref, ref);
    corto_debug("cpp: %p: construct(ref = %p // %s)\n", this, ref, corto_fullpath(NULL, m_ref));
}

Object::Object(corto_object ref, void *ptr, corto_type type) :
  CoreApi(*this),
  corto(*this),
  m_ref(NULL),
  m_ptr(ptr),
  m_type(type)
{
    corto_setref(&m_ref, ref);
    corto_debug("cpp: %p: construct(ref = %p, ptr = %p)\n", this, ref, ptr);
}

Object::Object(const Object& obj) :
  CoreApi(*this),
  corto(*this),
  m_ref(NULL),
  m_ptr(obj.m_ptr),
  m_type(obj.m_ref ? corto_typeof(obj.m_ref) : NULL)
{
    corto_setref(&m_ref, obj.m_ref);
    corto_debug("cpp: %p: construct(Object& %p) => ref = %p // %s, ptr = %p\n", this, &obj, m_ref, corto_fullpath(NULL, m_ref), m_ptr);
}

Object::Object(const Object&& obj) :
  CoreApi(*this),
  corto(*this),
  m_ref(NULL),
  m_ptr(obj.m_ptr),
  m_type(obj.m_ref ? corto_typeof(obj.m_ref) : NULL)
{
    corto_setref(&m_ref, obj.m_ref);
    corto_debug("cpp: %p: construct(Object&& %p) => ref = %p, ptr = %p\n", this, &obj, m_ref, m_ptr);
}

Object Object::operator=(Object obj) {
    return Object(obj.m_ref, obj.m_ptr, obj.m_type);
}

Object::~Object() {
    corto_debug("cpp: %p: destruct() => ref = %p, ptr = %p\n", this, m_ref, m_ptr);
    if (m_ref) {
        corto_release(m_ref);
    }
}

corto_type Object::type() {
    return m_type;
}

corto_object Object::ref() {
    return m_ref;
}

void Object::ref(corto_object obj) {
    corto_setref(&m_ref, obj);
    this->ptr(obj);
}

void* Object::ptr() {
    return m_ptr;
}

void Object::ptr(void* ptr) {
    m_ptr = ptr;
}


corto_object TObjectAPI::declare(corto_type type) {
    corto_object result = corto_declare(type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    this->m_ref = result;
    return result;
}

corto_object TObjectAPI::create(corto_type type, void *value) {
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
    this->m_ref = result;
    return result;
}

corto_object TObjectAPI::declareChild(corto::Object parent, std::string id, corto_type type) {
    corto_object result = corto_declareChild(parent.ref(), (corto_string)id.c_str(), type);
    if (!result) {
        throw corto::exception(corto_lasterr());
    }
    this->m_ptr = result;
    this->m_ref = result;
    return result;
}

corto_object TObjectAPI::createChild(corto::Object parent, std::string id, corto_type type, void *value) {
    corto_object result = corto_declareChild(parent.ref(), (corto_string)id.c_str(), type);
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
    this->m_ref = result;
    return result;
}

void TObjectAPI::define(void *value) {
    if (corto_copyp(m_ptr, corto_typeof(m_ptr), value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_define(m_ptr)) {
        throw corto::exception(corto_lasterr());
    }
}

void TObjectAPI::update(void *value) {
    if (!m_ref) {
        throw corto::exception("can't update, value is not an object");
    }

    if (corto_updateBegin(m_ref)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_copyp(m_ref, corto_typeof(m_ref), value)) {
        throw corto::exception(corto_lasterr());
    }
    if (corto_updateEnd(m_ref)) {
        throw corto::exception(corto_lasterr());
    }
}

void TObjectAPI::fromcontent(std::string contentType, std::string content) {
    corto_value v = corto_value_value(this->m_type, m_ptr);
    if (corto_value_fromcontent(&v, (corto_string)contentType.c_str(), (corto_string)content.c_str())) {
        throw corto::exception(corto_lasterr());
    }
}

}
