#include "motherboard.h"
#include <string>

void MotherBoard::SetCpu(Cpu *cpu)
{
    m_cpu = cpu;
}

void MotherBoard::SetSoundCard(SoundCard *soundCard)
{
    m_soundCard = soundCard;
}

void MotherBoard::SetVideoCard(VideoCard *videoCard)
{
    m_videoCard = videoCard;
}

void MotherBoard::changed(Colleague *colleague)
{
    if (colleague != m_cpu) {
        return;
    }

    OpenCpu((Cpu*)colleague);
}

void MotherBoard::OpenCpu(Cpu *cpu)
{
    // 主板开始运行各个部件，首先调用CPU，处理好数据
    std::string soundData = cpu->GetSoundData();
    std::string videoData = cpu->GetVideoData();

    // 将处理好的书记交个对应设备，让设备工作
    m_soundCard->SoundData(soundData);
    m_videoCard->VideoData(videoData);
}