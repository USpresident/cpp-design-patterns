#include "cpu_simulation.h"

Cpu::Cpu(Mediator *mediator) : Colleague(mediator) {};

void Cpu::ExecuteData(std::vector<std::string> data)
{
    if (data.size() != 2) {
        return;
    }

    m_soundData = data[0];
    m_videoData = data[1];
    GetMediator()->changed(this);
}

std::string Cpu::GetSoundData()
{
    return m_soundData;
}

std::string Cpu::GetVideoData()
{
    return m_videoData;
}