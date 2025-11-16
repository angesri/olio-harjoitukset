#include "car.h"

Car::Car() {}

void Car::setBrand(string brand)
{
    this->brand=brand;
}

void Car::setModel(string model)
{
    this->model=model;
}

void Car::setYearModel(int yearModel)
{
    this->yearModel=yearModel;
}

void Car::printData()
{
    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki: "<<this->brand<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Valmistusvuosi: "<<this->yearModel<<endl;

}




