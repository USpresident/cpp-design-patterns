#ifndef ABSTRACT_SERVER_H
#define ABSTRACT_SERVER_H

#include <string>

struct UserInof {
    std::string name;
    std::string pwd;
};

class IServer {
public:
    virtual void Request() = 0;
    virtual ~IServer() {}

protected:
    IServer() {}
};

#endif