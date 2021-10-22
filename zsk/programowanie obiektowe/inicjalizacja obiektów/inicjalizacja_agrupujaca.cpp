#include <iostream>
using namespace std;

class Car {
	public:
	    int id;
	    string brand;
	    string model;
	
	    void getData();
	    
	    Car();//domyslny
	    
	    Car(int p_Id, string p_brand, string p_model);//parametryczny
};

Car::Car(){
 	id = 1;
 	brand = "Marka domyslna";
 	model = "Model domyslny";
 	cout<<"Konstruktor domyslny"<<endl;
 	
}

Car::Car(int p_Id, string p_brand, string p_model){
	id = p_Id;
	brand = p_brand;
	model = p_model;
	cout<<"Konstruktor parametryczny"<<endl;
	
};

void Car::getData(){

    cout<<"ID: "<<id<<endl;
    cout<<"Marka: "<<brand<<endl;
    cout<<"Model: "<<model<<endl;
    cout<<endl;
    
}


int main()
{
    setlocale(LC_CTYPE,"polish");
    
	Car car1 (77,"Ferrari","szybki");
	
	car1.getData();
	
	//Car audi = Car(3,"AUDI","A5");
	Car audi;
	
	audi.getData();
}
