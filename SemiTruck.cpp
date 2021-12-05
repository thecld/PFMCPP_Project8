#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& t) : Vehicle(t) {}

SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck::~SemiTruck() = default;

void SemiTruck::turnOnCBRadio()
{
    std::cout << name << ": better turn on the CB radio to get noticed if there's a patrol!\n";
}

void SemiTruck::pullOver()
{
    std::cout << name << ": better pull over!\n";
}
