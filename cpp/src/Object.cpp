
#include <corto/cpp/Object.h>

namespace corto {

Object::Object() : m_handle(NULL) {
}

Object::Object(corto_object handle) : m_handle(handle) {
    corto_claim(m_handle);
}

Object::Object(Object& obj) : m_handle(NULL) {
    corto_setref(&m_handle, obj.handle());
}

Object::~Object() {
    corto_release(m_handle);
}

corto_object Object::handle() {
    return m_handle;
}

}
