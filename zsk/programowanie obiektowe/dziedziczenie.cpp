#include  <iostream>
using namespace std;

class Worker{
	private: 
		string name = "";
		string surname = "";
	
	public:
		void setName(string pName) {
			name = pName;
		}
	
		void setSurname(string pSurname) {
			surname = pSurname;
		}
		
		string getName() {
			return name;
		}
		
		string getSurname() {
			return surname;
		}
		
		string getData() {
			return name + " " + surname;
		}
};

class Teacher : public Worker{
	private:
		string schoolSubject = " ";
		
	public:
		void setSchoolSubject(string pSchoolSubject) {
			schoolSubject = pSchoolSubject;
		};
		
		string getSchoolSubject() {
			return getName() + " " + getSurname() + " " + schoolSubject;
		}
		
};

class Supervising: public Teacher {
	private:
		string schoolClass = " ";
		
	public:
		void setschoolClass(string pSchoolClass) {
			schoolClass = pSchoolClass;
		}
		
		string getSchoolClass() {
			//return getName() + " " + getSurname() + " " + schoolClass  +  " " + getSchoolSubject();
			return getSchoolSubject() + " "  + schoolClass;
		}
};

int main() {
	
	Worker pracownik;
	
	pracownik.setName("Janusz");
	pracownik.setSurname("Nowak");
	
	cout<<pracownik.getData();
	
	cout<<endl<<endl;
	
	Teacher nauczyciel;
	
	nauczyciel.setName("Zjuju");
	nauczyciel.setSurname("11");
	nauczyciel.setSchoolSubject("programowanie obiektowe");
	
	cout<< nauczyciel.getSchoolSubject();
	
	cout<<endl<<endl;
	
	Supervising wychowawca;
	
	wychowawca.setName("M");
	wychowawca.setSurname("R");
	wychowawca.setschoolClass("2D");
	wychowawca.setSchoolSubject("Matematyka");
	
	cout<<wychowawca.getSchoolClass();
	
	return 0;
}

