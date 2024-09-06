#include "car.h"
#include <iostream>

Car::Car()
{
    std::cout << "Car()." << std::endl;
}

Car::~Car()
{
    std::cout << "~Car()." << std::endl;
}

void Car::drive() {
    std::cout << "Car is driving." << std::endl;
}