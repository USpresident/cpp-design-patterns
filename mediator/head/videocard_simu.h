#ifndef VIDEO_CARD_H
#define VIDEO_CARD_H

#include "colleague.h"
#include "mediator.h"

#include <string>

class VideoCard : public Colleague {
public:
    VideoCard(Mediator *mediator);
    void VideoData(std::string data);
};

#endif