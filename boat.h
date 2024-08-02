
#pragma once
#include "vehicle.h"

class Boat : public Vehicle
{
    using Vehicle::Vehicle;

public:
    virtual void travel(Position destination);
};