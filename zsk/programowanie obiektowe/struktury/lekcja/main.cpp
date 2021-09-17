#include <iostream>
using namespace std;


struct Date{
	unsigned short int d;
	unsigned short int m;
	unsigned short int rrrr;
	
};

struct Student{
	string name;
	string surname;
	unsigned int id;
	Date dateBirthday;
	unsigned short int gradeInformatic[5];
	
};

int main(){
	setlocale(LC_CTYPE,"polisch");
	
	int z=1;
	
 	Student kowalski {"Janusz", "nowak", 1000, {17,9,2021}, {3,4,5,6,3}};
 	
 	
 	
 //	cout<< kowalski.id;
 	
 	
 	cout<<"dane pracownika\n "<<"imie i nazwisko "<<kowalski.name << " " 
	 << kowalski.surname <<" id studenta" <<kowalski.id
	 <<"\ndata urodzenia "<<kowalski.dateBirthday.d<<"-"
	 <<kowalski.dateBirthday.m<<"-"<<kowalski.dateBirthday.rrrr
	 <<" \noceny z informatyki :"<<endl;
	 for(int i = 0; i<5; i++)
	 {
	 	cout<<"ocena "<<z<<" to: ";
	 	cout<<kowalski.gradeInformatic[i]<<endl;
	 	z=z+1;
	 }
	 
	 
	 
 	
	return 0;
}
