#include "ioc_container.h"
#include "vehicle.h"
#include "car.h"
#include "bus.h"

#include "express.h"

#include "proxy_bug_manage.h"
#include "proxy_server.h"

#include "momento.h"
#include "original_word.h"
#include "caretaker.h"

#include "motherboard.h"
#include "cpu_simulation.h"
#include "soundcard_simu.h"
#include "videocard_simu.h"

#include <iostream>

int main()
{
    IocContainer<IVehicle> container;
    container.RegisterType<Car>("Car"); // 注册
    container.RegisterType<Bus>("Bus");

    std::shared_ptr<IVehicle> car = container.ResolveShared("Car");
    car->drive();

    std::shared_ptr<IVehicle> bus = container.ResolveShared("Bus");
    bus->drive();

    std::cout << "-------------------" << std::endl;

    ProxyBugManage proxy{};
    for (int i = 0; i < 3; ++i) {
        std::cout << "第" << i+1 << "次访问数据：";
        proxy.getBug();
    }

    std::unique_ptr<IServer> svr = std::make_unique<ProxyServer>("liuchao", "1234");
    svr->Request();

    std::cout << "-------------------" << std::endl;

    Express t = Express(3);
    t = Express('+', t, 13);
    std::cout << t << "=" << t.eval() << std::endl;

    Express y = Express('-', 5);
    std::cout << y << "=" << y.eval() << std::endl;

    Express x = Express('*', Express('-', 5), Express('+', 3, 4));
    std::cout << x << "=" << x.eval() << std::endl;

    std::cout << "-------------------" << std::endl;

    OriginalWord *fstMsg = new OriginalWord("Hello ffff..");
    std::cout << "fstMes....." << std::endl;
    fstMsg->showWords();
    CareTaker *careTaker = new CareTaker();
    careTaker->SetMomento(fstMsg->SaveWords());
    std::cout << "has saved fstMsg....." << std::endl;

    OriginalWord *sndMsg = new OriginalWord("Hello ggggg..");
    std::cout << "sndMes....." << std::endl;
    sndMsg->showWords();

    OriginalWord *thdMsg = new OriginalWord("Hello hhhhh..");
    std::cout << "thdMsg....." << std::endl;
    thdMsg->showWords();

    fstMsg->recycleWords(careTaker->GetMomento());
    fstMsg->showWords();

    delete fstMsg;
    delete sndMsg;
    delete thdMsg;
    delete careTaker;

    std::cout << "....................." << std::endl;

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
