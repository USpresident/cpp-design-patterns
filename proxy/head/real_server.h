#ifndef REAL_SERVER_H
#define REAL_SERVER_H

#include "abstract_server.h"
#include <iostream>

class RealServer : public IServer {
public:
    void Request() override;
};

#endif