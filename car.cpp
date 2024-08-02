#include "position.h"
#include "vehicle.h"
#include "car.h"
#include <iostream>

void Car::travel(Position destination) {
    std::cout << "This car drives " 
    << Position::calcDistance(getPosition(), destination)
    << " miles to " 
    << destination
    << " over land. The trip takes " 
    << getETA(destination)
    << " hours.";
}