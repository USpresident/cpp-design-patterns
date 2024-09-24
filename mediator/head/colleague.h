#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include "mediator.h"

class Colleague {
public:
    Colleague();
    Colleague(Mediator *mediator);
    Mediator *GetMediator();
private:
    Mediator *m_mediator;
};

#endif