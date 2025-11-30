#include "car.h"

Car::Car() {}

Car::Car(string brand, string model)
{
    this->brand=brand;
    this->model=model;
}

string Car::getModel()
{
return model;}

void Car::setModel(string model)
{
    this->model=model;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string brand)
{
    this->brand=brand;
}

void Car::setEngine()
{
    objectEngine1.setHorsepower(150);
    objectEngine1.setDisplacement(2.0);
}

void Car::setWheel()
{
    objectWheel1.setSize(17);
    objectWheel2.setSize(17);
    objectWheel3.setSize(17);
    objectWheel4.setSize(17);

    objectWheel1.setType("kesarengas");
    objectWheel2.setType("kesarengas");
    objectWheel3.setType("kesarengas");
    objectWheel4.setType("kesarengas");


}

void Car::printDetails()
{
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << objectEngine1.getHorsepower() << " hp, " << objectEngine1.getDisplacement()<<" L"<< endl;

    cout << "Rengas 1:" << objectWheel1.getSize() << " tuumaa, " << objectWheel1.getType()<< endl;
    cout << "Rengas 2:" << objectWheel2.getSize() << " tuumaa, " << objectWheel2.getType()<< endl;
    cout << "Rengas 3:" << objectWheel3.getSize() << " tuumaa, " << objectWheel3.getType()<< endl;
    cout << "Rengas 4:" << objectWheel4.getSize() << " tuumaa, " << objectWheel4.getType()<< endl;


}




