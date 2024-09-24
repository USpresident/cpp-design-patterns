#include "videocard_simu.h"
#include <iostream>

VideoCard::VideoCard(Mediator *mediator) : Colleague(mediator) {}

void VideoCard::VideoData(std::string data)
{
    std::cout << "VideoData: " << data << std::endl;
}