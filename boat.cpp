#include "vehicle.h"
#include "position.h"
#include "boat.h"
#include <iostream>

void Boat::travel(Position destination)
{
    std::cout << "\nThis boat sails "
              << Position::calcDistance(getPosition(), destination)
              << " miles to "
              << destination
              << " on seas, lakes, and rivers. The trip takes "
              << getETA(destination)
              << " hours.";
}