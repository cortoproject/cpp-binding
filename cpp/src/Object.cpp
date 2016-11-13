
#include <corto/cpp/Object.h>

namespace corto {

std::string CoreApi::idof() {
    return std::string(corto_idof(m_handle));
}

Object CoreApi::parentof() {
    return Object(corto_parentof(m_handle));
}

Object::Object() : corto(NULL), m_handle(NULL) {
}

Object::Object(corto_object handle) : corto(handle), m_handle(handle) {
    corto_claim(m_handle);
}

Object::Object(Object& obj) : corto(NULL), m_handle(NULL) {
    corto_setref(&m_handle, obj.handle());
}

Object::Object(Object&& obj) : corto(NULL), m_handle(NULL) {
    corto_setref(&m_handle, obj.handle());
}

Object::~Object() {
    corto_release(m_handle);
}

corto_object Object::handle() {
    return m_handle;
}

corto_object Object_t::create(corto_type type, void *value) {
    corto_object result = corto_declare(type);
    corto_copyp(result, type, value);
    corto_define(result);
    return result;
}

corto_object Object_t::createChild(corto::Object parent, std::string id, corto_type type, void *value) {
    corto_object result = corto_declareChild(parent.handle(), (corto_string)id.c_str(), type);
    corto_copyp(result, type, value);
    corto_define(result);
    return result;
}

}
