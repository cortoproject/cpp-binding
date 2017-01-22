
#ifndef TEST_STRUCTINHERITTYPE_HPP
#define TEST_STRUCTINHERITTYPE_HPP

#include <test.hpp>

namespace test {

class StructInheritType;

// wrapper class for /test/StructInheritType
class CStructInheritType : public CStructType
{
public:
    CStructInheritType();
    
    int32_t z();
    void z(int32_t value);
    
    void add(
        CStructInheritType s);
    
protected:
    CStructInheritType(types::StructInheritType* ref, types::StructInheritType* ptr, corto_type type);
    CStructInheritType(types::StructInheritType* ref, types::StructInheritType* ptr);
    CStructInheritType(types::StructInheritType* ref);
};

// wrapper class for references
class StructInheritTypeRef : public CStructInheritType
{
public:
    StructInheritTypeRef(types::StructInheritType* ref);
    StructInheritType operator()();
};

// wrapper class for values on stack
class StructInheritTypeVal : public CStructInheritType
{
public:
    friend class CStructInheritType;
    StructInheritType operator()();
    StructInheritTypeVal(types::StructInheritType* value);
private:
    types::StructInheritType m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class TStructInheritType : public TStructType<T>
{
public:
    TStructInheritType(T& _this, void *ptr) : TStructType<T>(_this, ptr) { }
    TStructInheritType(T& _this, corto_object ref, void *ptr) : TStructType<T>(_this, ref, ptr) { }
    TStructType<T> super() { return TStructType<T>(this->m_this, this->ptr); }
    T& z(int32_t value){ ((types::StructInheritType*)this->m_ptr)->z = value; return this->m_this; }
};

// fluent factory for /test/StructInheritType
class StructInheritType : public TStructInheritType<StructInheritType>
{
public:
    StructInheritType();
    StructInheritType(CStructInheritType& obj);
    StructInheritType(CStructInheritType& obj, corto_object ref);
    
    StructInheritTypeRef declare();
    StructInheritTypeRef create();
    StructInheritTypeRef declareChild(corto::Object parent, std::string id);
    StructInheritTypeRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    StructInheritTypeVal value();
private:
    struct types::StructInheritType m_value;
};

}

#endif
