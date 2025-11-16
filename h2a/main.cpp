#include "car.h"
#include "rectangle.h"

#include <iostream>

using namespace std;

int main()
{
    Car *objectCar1 = new Car;
    objectCar1->setBrand("Honda");
    objectCar1->setModel("Civic");
    objectCar1->setYearModel(2000);
    objectCar1->printData();


    Rectangle *objectRectangle1 = new Rectangle;
    objectRectangle1->setWidth(10);
    objectRectangle1->setHeight(15);
    cout<<""<<endl;
    cout<<"Rectangle"<<endl;
    cout<<"Pinta-ala: "<<objectRectangle1->getArea()<<endl;
    cout<<"Ymparysmitta: "<<objectRectangle1->getCircum()<<endl;
    delete objectRectangle1;
    objectRectangle1 = nullptr;

    return 0;
}
