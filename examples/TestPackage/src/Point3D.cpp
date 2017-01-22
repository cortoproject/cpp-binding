
#include <Test/Test.hpp>

namespace Test {

void CPoint3D::add(
    CPoint3D p)
{
/* $begin(add) */
    CPoint::add(p);
    z(z() + p.z());
/* $end */
}

}

