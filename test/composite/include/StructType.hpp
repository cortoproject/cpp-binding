
#ifndef TEST_STRUCTTYPE_HPP
#define TEST_STRUCTTYPE_HPP

#include <test.hpp>

namespace test {

class StructType;

// wrapper class for /test/StructType
class CStructType : public ::corto::Object
{
public:
    CStructType();
    
    int32_t x();
    void x(int32_t value);
    int32_t y();
    void y(int32_t value);
    
    void add(
        CStructType s);
    
protected:
    CStructType(types::StructType* ref, types::StructType* ptr, corto_type type);
    CStructType(types::StructType* ref, types::StructType* ptr);
    CStructType(types::StructType* ref);
};

// wrapper class for references
class StructTypeRef : public CStructType
{
public:
    StructTypeRef(types::StructType* ref);
    StructType operator()();
};

// wrapper class for values on stack
class StructTypeVal : public CStructType
{
public:
    friend class CStructType;
    StructType operator()();
    StructTypeVal(types::StructType* value);
private:
    types::StructType m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class TStructType : public ::corto::TObject<T>
{
public:
    TStructType(T& _this, void *ptr) : ::corto::TObject<T>(_this, ptr) { }
    TStructType(T& _this, corto_object ref, void *ptr) : ::corto::TObject<T>(_this, ref, ptr) { }
    T& x(int32_t value){ ((types::StructType*)this->m_ptr)->x = value; return this->m_this; }
    T& y(int32_t value){ ((types::StructType*)this->m_ptr)->y = value; return this->m_this; }
};

// fluent factory for /test/StructType
class StructType : public TStructType<StructType>
{
public:
    StructType();
    StructType(CStructType& obj);
    StructType(CStructType& obj, corto_object ref);
    
    StructTypeRef declare();
    StructTypeRef create();
    StructTypeRef declareChild(corto::Object parent, std::string id);
    StructTypeRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    StructTypeVal value();
private:
    struct types::StructType m_value;
};

}

#endif
