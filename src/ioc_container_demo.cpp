#include "../factory/ioc_container.h"

#include <iostream>

class IVehicle {
public:
    virtual void drive() = 0;
    virtual ~IVehicle() {}

protected:
    IVehicle() {}
};

class Car : public IVehicle {
public:
    Car()
    {
        std::cout << "Car()." << std::endl;
    }

    ~Car()
    {
        std::cout << "~Car()." << std::endl;
    }

    void drive() override {
        std::cout << "Car is driving." << std::endl;
    }
};

class Bus : public IVehicle {
public:
    Bus()
    {
        std::cout << "Bus()." << std::endl;
    }

    ~Bus()
    {
        std::cout << "~Bus()." << std::endl;
    }

    void drive() override {
        std::cout << "Bus is driving." << std::endl;
    }
};

int main()
{
    IocContainer<IVehicle> container;
    container.RegisterType<Car>("Car"); // 注册
    container.RegisterType<Bus>("Bus");

    std::shared_ptr<IVehicle> car = container.ResolveShared("Car");
    car->drive();

    std::shared_ptr<IVehicle> bus = container.ResolveShared("Bus");
    bus->drive();

    system("pause");
    return 0;
}
