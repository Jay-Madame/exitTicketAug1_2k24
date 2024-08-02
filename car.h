#pragma once
#include "vehicle.h"

class Car : public Vehicle
{
    using Vehicle::Vehicle;

public:
    virtual void travel(Position destination);
};