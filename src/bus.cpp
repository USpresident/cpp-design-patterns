#include "bus.h"
#include <iostream>

Bus::Bus()
{
    std::cout << "Bus()." << std::endl;
}

Bus::~Bus()
{
    std::cout << "~Bus()." << std::endl;
}

void Bus::drive() {
    std::cout << "Bus is driving." << std::endl;
}