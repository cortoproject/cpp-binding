
#ifndef TEST_POINT3D_HPP
#define TEST_POINT3D_HPP

#include <Test/Test.hpp>

namespace Test {

class Point3D;

// Implementation of corto type /Test/Point3D
class CPoint3D : public CPoint
{
public:
    CPoint3D();
    
    // Getters/setters
    int32_t z();
    void z(int32_t value);
    
    // Methods
    void add(
        CPoint3D p);
    
protected:
    // Protected constructors
    CPoint3D(types::Point3D* ref, types::Point3D* ptr, corto_type type);
    CPoint3D(types::Point3D* ref, types::Point3D* ptr);
    CPoint3D(types::Point3D* ref);
};

// Reference of corto type /Test/Point3D
class Point3DRef : public CPoint3D
{
public:
    Point3DRef(types::Point3D* ref);
    Point3D operator()();
};

// Value (on stack) of corto type /Test/Point3D
class Point3DVal : public CPoint3D
{
public:
    friend class CPoint3D;
    Point3D operator()();
    Point3DVal(types::Point3D* value);
private:
    types::Point3D m_value;
};

// Template with fluent methods returning T=Point3D for corto type /Test/Point3D
// By parameterizing T, fluent subclasses can reuse this code.
template <class T>
class TPoint3D : public TPoint<T>
{
public:
    TPoint3D(T& _this, void *ptr) : TPoint<T>(_this, ptr) { }
    TPoint3D(T& _this, corto_object ref, void *ptr) : TPoint<T>(_this, ref, ptr) { }
    TPoint<T> super() { return TPoint<T>(this->m_this, this->ptr); }
    T& z(int32_t value){ ((types::Point3D*)this->m_ptr)->z = value; return this->m_this; }
};

// Fluent factory class for corto type /Test/Point3D
class Point3D : public TPoint3D<Point3D>
{
public:
    Point3D();
    Point3D(CPoint3D& obj);
    Point3D(CPoint3D& obj, corto_object ref);
    
    Point3DRef declare();
    Point3DRef create();
    Point3DRef declareChild(corto::Object parent, std::string id);
    Point3DRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    Point3DVal value();
private:
    struct types::Point3D m_value;
};

}

#endif
