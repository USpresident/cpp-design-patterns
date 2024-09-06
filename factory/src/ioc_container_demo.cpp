#include "ioc_container.h"
#include "vehicle.h"
#include "car.h"
#include "bus.h"
// #include <iostream>

int main()
{
    IocContainer<IVehicle> container;
    container.RegisterType<Car>("Car"); // 注册
    container.RegisterType<Bus>("Bus");

    std::shared_ptr<IVehicle> car = container.ResolveShared("Car");
    car->drive();

    std::shared_ptr<IVehicle> bus = container.ResolveShared("Bus");
    bus->drive();

    // system("pause"); // 这是windows的
    return 0;
}
