#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public IVehicle {
public:
    Car();
    ~Car();
    void drive() override;
};

#endif