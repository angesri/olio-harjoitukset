#include <iostream>

using namespace std;

void calcSum(int a, int b){

    cout<< a << " + "<< b << " = " << a + b << endl;
}

void calcDiv(int a, int b){

    if(b == 0){
        cout<< "jakaja ei saa olla nolla!"<<endl;
    } else
    cout<< a << " / "<< b << " = "<< a / b << endl;
}

int retSum(int a, int b){

    return a + b;
}

float retDiv(int a, int b){
    if(b == 0){
        throw runtime_error("jakaja ei saa olla nolla!");
        }

    return (float) a / b;
}


int main()
{
    int a, b;

    cout << "Anna ensimmainen kokonaisluku" << endl;
    cin>> a;
    cout<<"Anna toinen kokonaisluku"<<endl;
    cin>> b;
    cout<<"Antamasi luvut ovat "<<a <<" ja "<<b <<endl;

    calcSum(a,b);

    calcDiv(a, b);

    cout <<"retSum summa " << retSum(a, b) << endl;


    try {
        cout << "Osamaara " << retDiv(a, b) << endl;
     } catch (runtime_error& e) {
         cout<<"Error: "<< e.what()<< endl;
     }

    return 0;
}

