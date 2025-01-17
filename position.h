#pragma once
#include <ostream>

class Position
{
private:
    double X, Y;

public:
    Position();
    Position(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    static double calcDistance(Position start, Position end);
    friend std::ostream &operator<<(std::ostream &strm, Position pos);
};