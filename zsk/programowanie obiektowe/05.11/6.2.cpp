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

void createObjectWorker()
{
	Worker worker;
	worker.getDate();
	cout<<"wywolanie funkcji create"<<endl;
	
}

void createObjectWorker2(string p_name,string p_surname)
{
	Worker worker(p_name,p_surname);
	worker.getDate();
	cout<<"wywolanie funkcji create"<<endl;
	
}


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE,"polish");
	
	Worker kowalski = Worker("Janusz","Kowalski");
	kowalski.getDate();
	
	cout<<"wskaznik"<<endl;
	
	Worker *p_kowalski = new Worker("Zjuju","11");
	
	delete p_kowalski;
	createObjectWorker2("Prawdziwy","Informatyk");
	
	return 0;
}
