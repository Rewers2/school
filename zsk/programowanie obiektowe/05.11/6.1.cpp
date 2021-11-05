#include <iostream>

using namespace std;

class Worker{
	public:
		string name, surname;
		
		Worker();
		Worker(string pName, string pSurname);
		void getDate();
		
		~Worker()//destruktor
		{
			cout<<"wywolanie destruktora"<<endl;
			cout<<endl;
		}
	
};
Worker::Worker()
{
	cout<<"konstruktor domyslny"<<endl;
	cout<<endl;
}

Worker::Worker(string pName, string pSurname)
:
	name  {pName},
	surname  {pSurname}
{

	cout<<"konstruktor parametryczny"<<endl;
	cout<<endl;
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
	
	
	
	return 0;
}

