#include "soundcard_simu.h"
#include <iostream>

SoundCard::SoundCard(Mediator *mediator) : Colleague(mediator) {}

void SoundCard::SoundData(std::string data)
{
    std::cout << "SoundData: " << data << std::endl;
}