
#ifndef TEST_STRUCTINHERITTYPE_HPP
#define TEST_STRUCTINHERITTYPE_HPP

#include <test.hpp>

namespace test {

class StructInheritType_t;

// wrapper class for /test/StructInheritType
class StructInheritType : public StructType
{
public:
    StructInheritType();
    StructInheritType_t operator()();
    
    int32_t z();
    void z(int32_t value);
    
    void add(
        StructInheritType s);
    
protected:
    StructInheritType(types::StructInheritType* handle, types::StructInheritType* ptr);
    StructInheritType(types::StructInheritType* handle);
};

// wrapper class for references
class StructInheritType_ref : public StructInheritType
{
public:
    StructInheritType_ref(types::StructInheritType* handle);
};

// wrapper class for values on stack
class StructInheritType_val : public StructInheritType
{
    friend class StructInheritType_t;
private:
    StructInheritType_val(types::StructInheritType* value);
    types::StructInheritType m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class StructInheritType_fluent : public StructType_fluent<T>
{
public:
    StructInheritType_fluent(T& _this, void *ptr) : StructType_fluent<T>(_this, ptr) { }
    StructType_fluent<T> super() { return StructType_fluent<T>(this->m_this, this->ptr); }
    T& z(int32_t value){ ((types::StructInheritType*)this->m_ptr)->z = value; return this->m_this; }
};

// fluent factory for StructInheritType
class StructInheritType_t : public StructInheritType_fluent<StructInheritType_t>, corto::Object_t
{
public:
    StructInheritType_t();
    StructInheritType_t(StructInheritType& obj);
    
    StructInheritType_ref declare();
    StructInheritType_ref create();
    StructInheritType_ref declareChild(corto::Object parent, std::string id);
    StructInheritType_ref createChild(corto::Object parent, std::string id);
    void define();
    void update();
    StructInheritType_val value();
private:
    struct types::StructInheritType m_value;
};

}

#endif
