
#ifndef TEST_STRUCTTYPE_HPP
#define TEST_STRUCTTYPE_HPP

#include <test.hpp>

namespace test {

class StructType_t;

// wrapper class for /test/StructType
class StructType : public ::corto::Object
{
public:
    StructType();
    StructType_t operator()();
    
    int32_t x();
    void x(int32_t value);
    int32_t y();
    void y(int32_t value);
    
    void add(
        StructType s);
    
protected:
    StructType(types::StructType* handle, types::StructType* ptr);
    StructType(types::StructType* handle);
};

// wrapper class for references
class StructType_ref : public StructType
{
public:
    StructType_ref(types::StructType* handle);
};

// wrapper class for values on stack
class StructType_val : public StructType
{
    friend class StructType_t;
private:
    StructType_val(types::StructType* value);
    types::StructType m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class StructType_fluent : public ::corto::Object_fluent<T>
{
public:
    StructType_fluent(T& _this, void *ptr) : ::corto::Object_fluent<T>(_this, ptr) { }
    T& x(int32_t value){ ((types::StructType*)this->m_ptr)->x = value; return this->m_this; }
    T& y(int32_t value){ ((types::StructType*)this->m_ptr)->y = value; return this->m_this; }
};

// fluent factory for StructType
class StructType_t : public StructType_fluent<StructType_t>, corto::Object_t
{
public:
    StructType_t();
    StructType_t(StructType& obj);
    
    StructType_ref declare();
    StructType_ref create();
    StructType_ref declareChild(corto::Object parent, std::string id);
    StructType_ref createChild(corto::Object parent, std::string id);
    void define();
    void update();
    StructType_val value();
private:
    struct types::StructType m_value;
};

}

#endif
