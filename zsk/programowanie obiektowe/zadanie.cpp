#include <iostream>
using namespace std;

class Character{
	public:
		string name;
		virtual void go() = 0;
		virtual void stop() = 0;
		string showName();
};

class Human : public Character{
	public:
		void go() {
			cout<<"czlowiek idzie "<<endl;
		}
		void stop() {
			cout<<"czlowiek sie zatrzymuje "<<endl;
		}
		string showName() {
			return name;
		}
};

class Bear : public Character{
	public:
		void go() {
			cout<<"mis idzie \n ";
		}
		void stop() {
			cout<<"mis sie zatrzymuje "<<endl;
		}
};

int main() {
	
//	Character postac;
	//postac.go();
	
	Human czlowiek;
	czlowiek.go();
	
	Character * wsk = &czlowiek;
	wsk->go();
	Bear niedzwiadek;
	
	wsk=&niedzwiadek;
	wsk->go();
	
	wsk=&czlowiek;
	wsk->name = "Janusz";
	cout<<czlowiek.showName();
	
	
	return 0;
}
