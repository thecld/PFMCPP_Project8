#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& t);

    virtual ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);

    void turnOnCBRadio();
    void pullOver();
};
