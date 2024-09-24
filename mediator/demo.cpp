#if 0

#include "head/motherboard.h"
#include "head/cpu_simulation.h"
#include "head/soundcard_simu.h"
#include "head/videocard_simu.h"

int main()
{
    // 创建Mediator
    MotherBoard *mediator = new MotherBoard();

    // 创建同事类对象
    Cpu *cpu = new Cpu(mediator);
    SoundCard *soundCard = new SoundCard(mediator);
    VideoCard *videoCard = new VideoCard(mediator);

    // 将设备接入总线
    mediator->SetCpu(cpu);
    mediator->SetSoundCard(soundCard);
    mediator->SetVideoCard(videoCard);

    // 运行
    std::vector<std::string> data;
    data.emplace_back("hello");
    data.emplace_back("world...");

    cpu->ExecuteData(data);
    return 0;
}

#endif