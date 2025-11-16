#include "car.h"

Car::Car() {}



void Car::printData()
{

    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki: "<<this->brand<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Valmistusvuosi: "<<this->yearModel<<endl;
    cout<<""<<endl;
}

Car::Car(string brand, string model, int yearModel)
{
    this->brand=brand;
    this->model=model;
    this->yearModel=yearModel;
}
