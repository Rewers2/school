#include <iostream>
using namespace std;

class School{
    public:
        static string s_school;
        static string s_job;

        string name;
        string surname;

        void getData();
        void setNameSurname(string name, string surname, string s_school);

        static string s_getSchool();
        static void s_setSchool(string pSchool);
        s_school=pSchool;


};

string School::s_school="ZSK";
string School::s_job="student";


void School::getData()
{
    cout<<"imie i nazwisko "<<name<<" "<<surname<<"\nSzkola"<<" "<<s_school;
}


void::School::setNameSurname(string pname, string psurname, string s_school)
{
    name=pname;
    surname=psurname;
    School::s_school=s_school;
}

string School::s_getSchool()
{
    
}

int main()
{
    setlocale(LC_ALL,"");

    cout<<School::s_school<<endl;
    cout<<School::s_job<<endl;

    School Kowalski;

    Kowalski.setNameSurname("Janusz", "Kowalski", "CDV");
    Kowalski.getData();

    School::s_setSchool("ZSK");
    Kowalski.getData();

    return 0; 
}