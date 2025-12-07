#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
#include <iostream>

int main()
{
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;
    pointerA = &b;
    cout << "pointerA osoittaa osoitteeseen: " << pointerA << endl;
    cout << "pointerA osoittaman muistipaikan arvo on: " << *pointerA << endl;


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2 " << objA2.getBinfo() << endl;
    cout << endl;

    return 0;
}
