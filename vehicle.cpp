#include "vehicle.h"
#include "position.h"

Vehicle::Vehicle() : Vehicle(0, {0, 0}, 0, 0) {}
Vehicle::Vehicle(double spd, Position pos, int numPass, int maxPass) : speed(spd), position(pos), numPassengers(numPass), maxPassengers(maxPass) {}
double Vehicle::getSpeed()
{
    return speed;
}
Position Vehicle::getPosition()
{
    return position;
}
int Vehicle::getNumPassengers()
{
    return numPassengers;
}
int Vehicle::getMaxPassengers()
{
    return maxPassengers;
}
void Vehicle::setSpeed(double spd)
{
    speed = spd;
}
void Vehicle::setPosition(Position pos)
{
    position = pos;
}
void Vehicle::setNumPassengers(int pass)
{
    numPassengers = pass;
}
void Vehicle::setMaxPassengers(int pass)
{
    maxPassengers = pass;
}
double Vehicle::getETA(Position destination)
{
    double dist = Position::calcDistance(position, destination);
    double time = dist / speed;
    return time;
}