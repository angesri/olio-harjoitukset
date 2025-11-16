#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

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

    unique_ptr<Student> objectStudent1 = make_unique<Student>();
    objectStudent1->setName("Riku");
    objectStudent1->setStudentNumber(8);
    objectStudent1->setAverage(8.0);
    cout<<""<<endl;
    cout<<"Opiskelijan nimi: "<<objectStudent1->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objectStudent1->getStudentNumber()<<endl;
    cout<<"Opiskelijan keskiarvo: "<<objectStudent1->getAverage()<<endl;


    return 0;
}
