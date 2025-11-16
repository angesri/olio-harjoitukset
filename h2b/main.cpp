#include "car.h"

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<Car> carList;
    carList.emplace_back("Ford", "Mondeo", 2003);
    carList.emplace_back("Fiat", "Stilo", 2006);
    carList.emplace_back("Ford", "Focus", 2009);
    carList[1].printData();

    for(Car car: carList){
        car.printData();
    }

    return 0;
}
