
#ifndef CORTO_CPP_OBJECT_H
#define CORTO_CPP_OBJECT_H

#include <corto/corto.h>
#include <string>

namespace corto {

class Object;
class Object_t;

class CoreApi
{
public:
    friend Object;
    std::string idof();
    Object parentof();
    Object typeof();
    std::string contentof(std::string contentType);
private:
    CoreApi(corto_object handle) : m_handle(handle) {}
    corto_object m_handle;
};

// C++ base wrapper class
class Object : public CoreApi
{
public:
    friend class Object_t;

    Object();
    Object(corto_object handle);
    Object(corto_object handle, void *ptr);
    Object(Object& obj);
    Object(Object&& obj);
    ~Object();

    CoreApi* corto;

protected:
    corto_object handle();
    void handle(corto_object obj);
    void* ptr();
    void ptr(void* ptr);

private:
    corto_object m_handle; // Reference to object
    void *m_ptr; // Pointer to value (for objects that live on the stack)
};

// Helper base class for factories
template <class T>
class Object_v
{
public:
    Object_v(T& _this, void *ptr) : m_this(_this), m_ptr(ptr) { }
protected:
    T& m_this;
    void *m_ptr;
};

// Helper functions for factories
class Object_t {
public:
    corto_object create(corto_type type, void *value);
    corto_object createChild(corto::Object parent, std::string id, corto_type type, void *value);
    void update(void *value);
protected:
    Object_t(::corto::Object& _obj) : _obj(_obj) {}
private:
    struct ::corto::Object& _obj;
};

}

#endif
