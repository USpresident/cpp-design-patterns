#ifndef MOTHER_BOARD_H
#define MOTHER_BOARD_H

#include "soundcard_simu.h"
#include "videocard_simu.h"
#include "cpu_simulation.h"
#include "mediator.h"

class MotherBoard : public Mediator {
public:
    void SetCpu(Cpu *cpu);
    void SetSoundCard(SoundCard *soundCard);
    void SetVideoCard(VideoCard *videoCard);

    void changed(Colleague *colleague) override;

private:
    void OpenCpu(Cpu *cpu);

private:
    Cpu *m_cpu;
    SoundCard *m_soundCard;
    VideoCard *m_videoCard;
};


#endif