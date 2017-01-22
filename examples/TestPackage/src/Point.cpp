
#include <Test/Test.hpp>

namespace Test {

void CPoint::add(
    CPoint p)
{
/* $begin(add) */
    x(x() + p.x());
    y(y() + p.y());
/* $end */
}

}

