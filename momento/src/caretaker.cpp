#include "caretaker.h"

CareTaker::~CareTaker()
{
    delete m_momento;
}

void CareTaker::SetMomento(Momento *momento)
{
    m_momento = momento;
}

Momento *CareTaker::GetMomento()
{
    return m_momento;
}