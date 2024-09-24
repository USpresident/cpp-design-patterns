#ifndef CPU_H
#define CPU_H

#include "colleague.h"
#include "mediator.h"
#include "soundcard_simu.h"
#include "videocard_simu.h"
#include <string>
#include <vector>

class Cpu : public Colleague {
public:
    Cpu(Mediator *mediator);

    void ExecuteData(std::vector<std::string> data);

    std::string GetSoundData();
    std::string GetVideoData();

private:
    std::string m_videoData;
    std::string m_soundData;
};

#endif