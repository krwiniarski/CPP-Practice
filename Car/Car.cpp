//Car.cpp
//Car Class

#include <string>
#include "Car.h"        //Includes header with attributes and constructor

//returns car make
std::string Car::getMake()
{
    return make;
}

//returns speed
int Car::getSpeed()
{
    return speed;
}

//returns year
int Car::getYear()
{
    return year;
}

//accerlerates car
int Car::accelerate()
{
    speed+=5;
    return speed;
}

//brakes car
int Car::brake()
{
    speed-=5;
    if (speed<0)
    {
        speed=0;
    }
    return speed;
    
}