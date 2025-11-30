#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int, string);
    int getSize();
    void setSize(int size);
    string getType();
    void setType(string type);

};

#endif // WHEEL_H
