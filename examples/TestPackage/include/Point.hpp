
#ifndef TEST_POINT_HPP
#define TEST_POINT_HPP

#include <Test/Test.hpp>

namespace Test {

class Point;

// Implementation of corto type /Test/Point
class CPoint : public ::corto::Object
{
public:
    CPoint();
    
    // Getters/setters
    int32_t x();
    void x(int32_t value);
    int32_t y();
    void y(int32_t value);
    
    // Methods
    void add(
        CPoint p);
    
protected:
    // Protected constructors
    CPoint(types::Point* ref, types::Point* ptr, corto_type type);
    CPoint(types::Point* ref, types::Point* ptr);
    CPoint(types::Point* ref);
};

// Reference of corto type /Test/Point
class PointRef : public CPoint
{
public:
    PointRef(types::Point* ref);
    Point operator()();
};

// Value (on stack) of corto type /Test/Point
class PointVal : public CPoint
{
public:
    friend class CPoint;
    Point operator()();
    PointVal(types::Point* value);
private:
    types::Point m_value;
};

// Template with fluent methods returning T=Point for corto type /Test/Point
// By parameterizing T, fluent subclasses can reuse this code.
template <class T>
class TPoint : public ::corto::TObject<T>
{
public:
    TPoint(T& _this, void *ptr) : ::corto::TObject<T>(_this, ptr) { }
    TPoint(T& _this, corto_object ref, void *ptr) : ::corto::TObject<T>(_this, ref, ptr) { }
    T& x(int32_t value){ ((types::Point*)this->m_ptr)->x = value; return this->m_this; }
    T& y(int32_t value){ ((types::Point*)this->m_ptr)->y = value; return this->m_this; }
};

// Fluent factory class for corto type /Test/Point
class Point : public TPoint<Point>
{
public:
    Point();
    Point(CPoint& obj);
    Point(CPoint& obj, corto_object ref);
    
    PointRef declare();
    PointRef create();
    PointRef declareChild(corto::Object parent, std::string id);
    PointRef createChild(corto::Object parent, std::string id);
    void define();
    void update();
    PointVal value();
private:
    struct types::Point m_value;
};

}

#endif
