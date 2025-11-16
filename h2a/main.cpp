#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car *objectCar1 = new Car;
    objectCar1->setBrand("Honda");
    objectCar1->setModel("Civic");
    objectCar1->setYearModel(2000);
    objectCar1->printData();
    delete objectCar1;
    objectCar1 = nullptr;
    return 0;
}
