
#ifndef TEST_STRUCT_HPP
#define TEST_STRUCT_HPP

#include <test.hpp>

namespace test {

class Struct_t;

// wrapper class for /test/Struct
class Struct : public corto::test::SuiteData
{
public:
    Struct();
    Struct_t operator()();
    
    bool updated();
    void updated(bool value);
    
    void onUpdate(
         event,
        corto::lang::object object,
        corto::core::observer observer);
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
    Struct(types::Struct ref, types::Struct ptr);
    Struct(types::Struct ref);
};

// wrapper class for references
class Struct_ref : public Struct
{
public:
    Struct_ref(types::Struct ref);
};

// wrapper class for values on stack
class Struct_val : public Struct
{
    friend class Struct_t;
private:
    Struct_val(types::Struct value);
    types::Struct m_value;
};

// helper template with T = fluent method returntype to support inheritance
template <class T>
class Struct_fluent : public corto::test::SuiteData_fluent<T>
{
public:
    Struct_fluent(T& _this, void *ptr) : corto::test::SuiteData_fluent<T>(_this, ptr) { }
    corto::test::SuiteData_fluent<T> super() { return corto::test::SuiteData_fluent<T>(this->m_this, this->ptr); }
    T& updated(bool value){ ((types::Struct)this->m_ptr)->updated = value; return this->m_this; }
};

// fluent factory for Struct
class Struct_t : public Struct_fluent<Struct_t>, corto::Object_t
{
public:
    Struct_t();
    Struct_t(Struct& obj);
    
    Struct_ref declare();
    Struct_ref create();
    Struct_ref declareChild(corto::Object parent, std::string id);
    Struct_ref createChild(corto::Object parent, std::string id);
    void define();
    void update();
    Struct_val value();
private:
    struct types::Struct m_value;
};

}

#endif
