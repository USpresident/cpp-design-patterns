#ifndef SOUND_CARD_H
#define SOUND_CARD_H

#include "colleague.h"
#include "mediator.h"

#include <string>

class SoundCard : public Colleague {
public:
    SoundCard(Mediator *mediator);
    void SoundData(std::string data);
};

#endif