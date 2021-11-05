#include <iostream>

using namespace std;


		int obiekt = 0;
		
class Worker{
	public:
		string name, surname;

		Worker();
		Worker(string pName, string pSurname);
		void getDate();
		
		~Worker()//destruktor
		{
			cout<<"wywolanie destruktora"<<endl;
			obiekt-=1;
			cout<<"liczba obiektow z destruktorem "<<obiekt<<endl;
			
		}
	
};

Worker::Worker()
{
	cout<<"konstruktor domyslny"<<endl;
	cout<<endl;
	obiekt+=1;
}

Worker::Worker(string pName, string pSurname)
:
	name  {pName},
	surname  {pSurname}
{

	cout<<"konstruktor parametryczny"<<endl;
	cout<<endl;
	obiekt+=1;
}

void Worker::getDate(){
	cout<<"imie i nazwisko: "<<name<<" "<<surname;
	cout<<endl;
}

int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE,"polish");
	Worker kowalski;
	Worker nowak;
	cout<<"obiekty "<<obiekt<<endl;
	
	return 0;
}
