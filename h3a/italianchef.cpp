#include "italianchef.h"
#include <iostream>


ItalianChef::ItalianChef(string name) : Chef(name)
{
    this->name = name;

    cout << "ItalianChef " << this->name << " konstruktori " << endl;

}

string ItalianChef::getName()
{
    return this->name;
    cout<< "name of the Italian Chef is "<< name<< endl;
}

void ItalianChef::makePasta()
{
    cout<< "Italian Chef"<< name<< " makes pasta "<< endl;
}

ItalianChef::~ItalianChef()
{
    cout<< "ItalianChef"<< name<< " destruktori "<< endl;
}
