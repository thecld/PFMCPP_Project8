#pragma once

#include "Vehicle.h"

struct Car : Vehicle
{
    Car(const std::string& s);

    virtual ~Car() override;
    Car(const Car&);
    Car& operator=(const Car&);

    void closeWindows();

    void tryToEvade() override;
};
