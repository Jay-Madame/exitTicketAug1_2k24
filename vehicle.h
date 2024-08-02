#pragma once

class Position;

class Vehicle
{
private:
    double speed;
    Position position;
    int numPassengers;
    int maxPassengers;

public:
    Vehicle();
    Vehicle(double spd, Position pos, int numPass, int maxPass);
    double getSpeed();
    Position getPosition();
    int getNumPassengers();
    int getMaxPassengers();
    void setSpeed(double spd);
    void setPosition(Position pos);
    void setNumPassengers(int pass);
    void setMaxPassenggers(int pass);
    double getETA(Position destination);
    virtual void travel(Position destination) = 0;
};