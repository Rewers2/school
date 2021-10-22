#include<iostream>

using namespace std;


class Car{
	public:
	unsigned int id{10};
	string brand{"Ferrari"};
	string model{"F430"};
	
	void getData();
	
	Car();
	Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<", \nmodel: "<<model<<endl;
}

Car::Car(){
	cout<<"Konstruktor bezparametrowy\n\n"<<endl;
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=3;
	brand="Fiat";
	model="126p";
}


int main(int argc, char** argv){
	(LC_CTYPE, "polish");
	
	Car Ferrari;
	
	Ferrari.getData();
	
return 0;}
