
#ifndef CORTO_CPP_OBJECT_H
#define CORTO_CPP_OBJECT_H

#include <corto/corto.h>

namespace corto {

class Object
{
public:
    Object();
    Object(corto_object handle);
    Object(Object& obj);
    ~Object();

protected:
    corto_object handle();

private:
    corto_object m_handle;
};

}

#endif
