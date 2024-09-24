#include "colleague.h"

Colleague::Colleague() {}

Colleague::Colleague(Mediator *mediator)
{
    m_mediator = mediator;
}

Mediator *Colleague::GetMediator()
{
    return m_mediator;
}