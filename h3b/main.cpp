#include "animal.h"
#include "dog.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Animal> objectAnimal1 = make_unique<Animal>();
    objectAnimal1->callOut();




    unique_ptr<Animal> objectDog1 = make_unique<Dog>();
    objectDog1->callOut();





    return 0;
}
