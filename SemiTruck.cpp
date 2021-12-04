#include "SemiTruck.h"

SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck::~SemiTruck() = default;

void SemiTruck::turnOnCBRadio()
{
    std::cout << "Better turn on the CB radio to get noticed if there's a patrol!\n";
}

void SemiTruck::pullOver()
{
    std::cout << "Better pull over!\n";
}
