#include "CppApp.hpp"

// Fluent API example for C++

// # Code is generated from this type definition:

// #package /Test
//
// struct Point::
//   x, y: int32
//   void add(Point p)
//
// struct Point3D: Point::
//   z: int32
//   void add(Point3D p)

using namespace std;
using namespace Test;

int CppAppMain(int argc, char *argv[])
{
    // Create new Point instance with id 'p2d'
    PointRef p2d = Point().x(1).y(2).createChild(corto::root, "p2d");

    // Create Point instance on stack, serialize initial value from corto string
    Point3DVal p3d = Point3D().fromcontent("text/corto", "{x=1, y=2, z=3}").value();

    // Update p2d (notifies observers). p2d() obtains a factory instance for p2d
    p2d().x(p2d.x() + 1).update();

    // Call generated Point::add method
    p2d.add(p3d);

    // Print value of p2d and p3d in JSON
    cout << p2d.idof() << ": " << p2d.contentof("text/json") << std::endl;
    cout << "p3d: " << p3d.contentof("text/json") << std::endl;

    // Dynamically call Point::add from pure C (method implementation is in C++)
    corto_object m = corto_lookup(NULL, "Test/Point/add");
    corto_call(m, NULL /* returns void */, p2d.ref(), p3d.ptr()); // Add p3d to p2d
    corto_release(m);

    return 0;
}
