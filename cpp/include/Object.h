
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
    CoreApi(const corto_object handle) : m_handle(handle) {}
    const corto_object m_handle;
};

// C++ base wrapper class
class Object : public CoreApi
{
public:
    friend class Object_fluentAPI;

    Object();
    Object(corto_object handle);
    Object(corto_object handle, void *ptr);
    Object(const Object& obj);
    Object(const Object&& obj);
    Object operator=(Object obj);
    ~Object();

    CoreApi& corto;

protected:
    corto_object handle();
    void handle(corto_object obj);
    void* ptr();
    void ptr(void* ptr);

private:
    corto_object m_handle; // Reference to object (optional)
    void *m_ptr; // Pointer to value (for objects that live on the stack)
};

// C++ utility methods that wrap C functions and add exception handling
class Object_fluentAPI {
public:
    corto_object declare(corto_type type);
    corto_object create(corto_type type, void *value);
    corto_object declareChild(corto::Object parent, std::string id, corto_type type);
    corto_object createChild(corto::Object parent, std::string id, corto_type type, void *value);
    void define(void *value);
    void update(void *value);
    void fromcontent(std::string contentType, std::string content);
protected:
    Object_fluentAPI(corto_object handle, void *ptr) : m_handle(handle), m_ptr(ptr) {}
    corto_type m_type;
    corto_object m_handle; // Reference to object (optional)
    void *m_ptr; // Pointer to value (can be same as object handle)
};

// Helper base class for factories
template <class T>
class Object_fluent : protected Object_fluentAPI
{
public:
    Object_fluent(T& _this, corto_object handle, void *ptr) : Object_fluentAPI(handle, ptr), m_this(_this) { }
    T& fromcontent(std::string contentType, std::string content)
      { return ((Object_fluentAPI*)this)->fromcontent(contentType, content); }
protected:
    T& m_this; // The fluent factory instance (<type>_t)
};

}

#endif
