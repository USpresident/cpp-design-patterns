#ifndef VEHICLE_H
#define VEHICLE_H

class IVehicle {
public:
    virtual void drive() = 0;
    virtual ~IVehicle() {}
protected:
    IVehicle() {}
};

#endif