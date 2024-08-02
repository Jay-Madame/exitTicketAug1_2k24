#include "position.h"
#include "position.cpp"
#include "vehicle.h"
#include "vehicle.cpp"
#include "car.cpp"
#include "car.h"
#include "boat.cpp"
#include "boat.h"

void testCar();
void testBoat();
int main()
{
    // for test dev purposes
    // testCar();
    // testBoat();

    Vehicle *vehicles[5];
    Position here(20, 20);
    Position there(40, 60);
    Position overThere(150, 400);
    Position wayOverThere(1456, 2841);
    Position reallyClose(21, 21);
    Position theBestSpot(42, 42);

    vehicles[0] = new Car(50, here, 2, 3);
    vehicles[1] = new Boat(24, there, 4, 12);
    vehicles[2] = new Car(75, overThere, 1, 2);
    vehicles[3] = new Boat(10, wayOverThere, 3, 6);
    vehicles[4] = new Car(20, reallyClose, 2, 5);

    for (Vehicle *&v : vehicles)
    {
        v->travel(theBestSpot);
        std::cout << std::endl;
    }
}

void testCar()
{

    Position here(50, 75);
    Car myCar(70, here, 4, 5);
    Position there(120, 10);
    std::cout << myCar.getETA(there) << std::endl;
    myCar.travel(there);
}
void testBoat()
{
    Position here(50, 75);
    Boat myBoat(70, here, 4, 5);
    Position there(120, 10);
    std::cout << myBoat.getETA(there) << std::endl;
    myBoat.travel(there);
}