#ifndef CARETAKER_H
#define CARETAKER_H

#include "momento.h"

/**
 * 用于设置快照，获得快照
 */
class CareTaker {
public:
    ~CareTaker();

    void SetMomento(Momento *momento);

    Momento *GetMomento();

private:
    Momento *m_momento;
};

#endif