
#ifndef TEST_POINT4D_HPP
#define TEST_POINT4D_HPP

#include <Test/Test.hpp>

namespace Test {

class Point4D;

// Implementation of corto type /Test/Point4D
class CPoint4D : public CPoint3D
{
public:
    CPoint4D();
    
    // Getters/setters
    int32_t w();
    void w(int32_t value);
    
    // Methods
    void add(
        CPoint4D p);
    
protected:
    // Protected constructors
    CPoint4D(types::Point4D* ref, types::Point4D* ptr, corto_type type);
    CPoint4D(types::Point4D* ref, types::Point4D* ptr);
    CPoint4D(types::Point4D* ref);
};

// Reference of corto type /Test/Point4D
class Point4DRef : public CPoint4D
{
public:
    Point4DRef(types::Point4D* ref);
    Point4D operator()();
};

// Value (on stack) of corto type /Test/Point4D
class Point4DVal : public CPoint4D
{
public:
    friend class CPoint4D;
    Point4D operator()();
    Point4DVal(types::Point4D* value);
private:
    types::Point4D m_value;
};

// Template with fluent methods returning T=Point4D for corto type /Test/Point4D
// By parameterizing T, fluent subclasses can reuse this code.
template <class T>
class TPoint4D : public TPoint3D<T>
{
public:
    TPoint4D(T& _this, void *ptr) : TPoint3D<T>(_this, ptr) { }
    TPoint4D(T& _this, corto_object ref, void *ptr) : TPoint3D<T>(_this, ref, ptr) { }
    TPoint3D<T> super() { return TPoint3D<T>(this->m_this, this->ptr); }
    T& w(int32_t value){ ((types::Point4D*)this->m_ptr)->w = value; return this->m_this; }
};

// Fluent factory class for corto type /Test/Point4D
class Point4D : public TPoint4D<Point4D>
{
public:
    Point4D();
    Point4D(CPoint4D& obj);
    Point4D(CPoint4D& obj, corto_object ref);
    
    Point4DRef declare();
    Point4DRef create();
    Point4DRef declareChild(corto::Object parent, std::string id);
    Point4DRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    Point4DVal value();
private:
    struct types::Point4D m_value;
};

}

#endif
