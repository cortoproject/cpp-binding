
#ifndef TEST_STRUCT_HPP
#define TEST_STRUCT_HPP

#include <test.hpp>

namespace test {

class Struct;

// wrapper class for /test/Struct
class CStruct : public Ccorto::test::SuiteData
{
public:
    CStruct();
    
    char updated();
    void updated(char value);
    
    void onUpdate(
         event,
        Ccorto::lang::object object,
        Ccorto::core::observer observer);
    void tc_create();
    void tc_createChild();
    void tc_declare();
    void tc_declareChild();
    void tc_define();
    void tc_function();
    void tc_member();
    void tc_method();
    void tc_update();
    void tc_value();
    
protected:
    CStruct(types::Struct ref, types::Struct ptr, corto_type type);
    CStruct(types::Struct ref, types::Struct ptr);
    CStruct(types::Struct ref);
};

// wrapper class for references
class StructRef : public CStruct
{
public:
    StructRef(types::Struct ref);
    Struct operator()();
};

// wrapper class for values on stack
class StructVal : public CStruct
{
public:
    friend class CStruct;
    Struct operator()();
    StructVal(types::Struct value);
private:
    types::Struct m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class TStruct : public Tcorto::test::SuiteData<T>
{
public:
    TStruct(T& _this, void *ptr) : Tcorto::test::SuiteData<T>(_this, ptr) { }
    TStruct(T& _this, corto_object ref, void *ptr) : Tcorto::test::SuiteData<T>(_this, ref, ptr) { }
    Tcorto::test::SuiteData<T> super() { return Tcorto::test::SuiteData<T>(this->m_this, this->ptr); }
    T& updated(char value){ ((types::Struct)this->m_ptr)->updated = value; return this->m_this; }
};

// fluent factory for /test/Struct
class Struct : public TStruct<Struct>
{
public:
    Struct();
    Struct(CStruct& obj);
    Struct(CStruct& obj, corto_object ref);
    
    StructRef declare();
    StructRef create();
    StructRef declareChild(corto::Object parent, std::string id);
    StructRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    StructVal value();
private:
    struct types::Struct m_value;
};

}

#endif
