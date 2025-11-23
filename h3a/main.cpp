#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{

 /*   Chef objectChef1("Gordon Ramsay");
    objectChef1.makeSalad();
    objectChef1.makeSoup();
*/
    ItalianChef objectItalianChef1("Anthony Bourdain");
    objectItalianChef1.makeSalad();
    objectItalianChef1.makeSoup();
    objectItalianChef1.makePasta();
    cout << "name of the Italian Chef is " << objectItalianChef1.getName() << endl;




    return 0;
}
