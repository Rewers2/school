#include <iostream>
using namespace std;

class Car{
    public:
    int id = 3;
    string brand = "fiat";
    string model = "multipla";

    void getDate();
    
    Car();
    
    Car(int p_id, string p_brand, string p_model);
    	
	
};

void Car::getDate(){

    cout<<"ID: "<<id<<endl;
    cout<<"Marka: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<endl;
    
}

Car::Car( int p_id, string p_brand, string p_model){
	
	id = p_id;
	brand = p_brand;
	model = p_model;
	
}

Car::Car(){
		
	id = 5;
	brand = "Audi";
	model = "A8";
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
