#include <iostream>
#include "car.h"
using namespace std;

int main()
{

    Car car1("Toyota", "Corolla");
    car1.setEngine();
    car1.setWheel();
    car1.printDetails();

    return 0;
}
