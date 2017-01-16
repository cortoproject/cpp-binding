
#ifndef CORTO_CPP_H
#define CORTO_CPP_H

#include <string>
#include <iostream>
#include <corto/cpp/Object.h>

namespace corto {
extern ::corto::Object root;
extern ::corto::Object null;

class exception {
public:
    exception(std::string msg);
    std::string msg();
private:
    std::string m_msg;
};

}

#endif /* CORTO_CPP_H */
