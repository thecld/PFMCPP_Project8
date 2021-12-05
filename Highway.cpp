#include "Highway.h"
//#include <cassert>

void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    if ( Motorcycle* bike = dynamic_cast<Motorcycle*>(v) ) bike->lanesplitAndRace();

    if ( Car* car = dynamic_cast<Car*>(v) ) car->closeWindows();

    if ( SemiTruck* truck = dynamic_cast<SemiTruck*>(v) ) truck->turnOnCBRadio();
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    if ( Motorcycle* bike = dynamic_cast<Motorcycle*>(v) ) bike->tryToEvade();

    if ( Car* car = dynamic_cast<Car*>(v) ) car->tryToEvade();

    if ( SemiTruck* truck = dynamic_cast<SemiTruck*>(v) ) truck->pullOver();
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}
