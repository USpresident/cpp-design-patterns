#ifndef BUS_H
#define BUS_H

#include "vehicle.h"

class Bus : public IVehicle {
public:
    Bus();
    ~Bus();
    void drive() override;
};

#endif