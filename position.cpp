#include "position.h"
#include <cmath>

Position::Position() : Position(0, 0) {}
Position::Position(double x, double y) : X(x), Y(y) {}
double Position::getX()
{
    return X;
}
double Position::getY()
{
    return Y;
}
void Position::setX(double x)
{
    X = x;
}
void Position::setY(double y)
{
    Y = y;
}
double Position::calcDistance(Position start, Position end)
{
    return sqrt(
        (pow((start.getX() - end.getX()), 2)) +
        (pow((start.getY() - end.getY()), 2)));
}