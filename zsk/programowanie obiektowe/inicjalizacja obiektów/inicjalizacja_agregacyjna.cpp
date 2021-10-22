#include <iostream>
using namespace std;

class Car{
    public:
    int id = 3;
    string brand = "fiat";
    string model = "multipla";

    void getDate();
};

void Car::getDate(){

    cout<<"ID: "<<id<<endl;
    cout<<"Marka: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<endl;
    
}


int main()
{
    setlocale(LC_CTYPE,"polish");
    Car audi;
    
    audi.getDate();
    
    Car bmw = Car(11,"OPEL","ASTRA");
    
    bmw.getDate();
    
    return 0;
}
