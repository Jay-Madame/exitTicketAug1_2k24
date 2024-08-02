#include "position.h"
#include "position.cpp"
#include "vehicle.h"
#include "vehicle.cpp"
#include "car.cpp"
#include "car.h"

int main()
{
    Position here(50, 75);
    Car myCar(70, here, 4, 5);
    Position there(120, 10);
    std::cout << myCar.getETA(there);
    myCar.travel(there);
}