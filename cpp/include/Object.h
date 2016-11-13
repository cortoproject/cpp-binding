
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
private:
    CoreApi(corto_object handle) : m_handle(handle) {}
    corto_object m_handle;
};

// C++ base wrapper class
class Object
{
public:
    friend class Object_t;

    Object();
    Object(corto_object handle);
    Object(Object& obj);
    Object(Object&& obj);
    ~Object();

    CoreApi corto;

protected:
    corto_object handle();

private:
    corto_object m_handle;
};

// Helper base class for factories
template <class T>
class Object_v
{
public:
    Object_v(T& _this, void *ptr) : _this(_this), ptr(ptr) { }
protected:
    T& _this;
    void *ptr;
};

// Helper functions for factories
class Object_t {
public:
    static corto_object create(corto_type type, void *value);
    static corto_object createChild(corto::Object parent, std::string id, corto_type type, void *value);
};

}

#endif
