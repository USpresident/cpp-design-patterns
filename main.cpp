#include "ioc_container.h"
#include "vehicle.h"
#include "car.h"
#include "bus.h"

#include "proxy_bug_manage.h"
#include "proxy_server.h"
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
    std::cout << "-------------------" << std::endl;

    std::unique_ptr<IServer> svr = std::make_unique<ProxyServer>("liuchao", "1234");
    svr->Request();

    return 0;
}
