#ifndef CAR_H
#define CAR_H
#include "Engine.h"
#include "Wheel.h"
using namespace std;
#include <iostream>


class Car
{
private:
    Engine objectEngine1;
    Wheel objectWheel1;
    Wheel objectWheel2;
    Wheel objectWheel3;
    Wheel objectWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string, string);
    string getModel();
    void setModel(string model);
    string getBrand();
    void setBrand(string brand);

    void setEngine();
    void setWheel();
    void printDetails();
};

#endif // CAR_H
