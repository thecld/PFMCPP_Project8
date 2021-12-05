#pragma once

//#include <iostream>
//#include <limits>
#include "Vehicle.h"

struct Motorcycle : Vehicle
{
    Motorcycle(const std::string& n);

    virtual ~Motorcycle() override;
    Motorcycle(const Motorcycle&);
    Motorcycle& operator=(const Motorcycle&) = default;
    
    void lanesplitAndRace( int topSpeed = 160 /*std::numeric_limits<int>::max()*/ );
    
    void tryToEvade() override;

    void setSpeed(int s) override;
};
