#include <iostream>

using namespace std;


struct Date{
    unsigned short int dd;
    unsigned short int mm;
    unsigned short int rrrr;

};

class Worker {
    public:

    unsigned int id{};
    string name {}, surname {};
    Date dateBirthday {};

    void showAllData();
    void setData(unsigned int x, string name, string surname);

};

void Worker::showAllData(){

    cout<<"Dane pracownika: "<<endl;
    cout<<"identyfikator:"<<endl;
    cout<<id<<endl;
    cout<<"imie i nazwisko :"<<endl;
    cout<<name<<" "<<surname;

}

void Worker::setData(unsigned int x, string name, string surname, Date dateBirthdayset){
    id=x;
    Worker::id=id;
    Worker::name=name;
    Worker::surname=surname;
    dateBirthday=dateBirthdayset;
    
}

int main()
{
   setlocale(LC_CTYPE, "polish");
   Worker Kowalski;

   Kowalski.setData(10, "Adam ", "Sabek",{1, 2, 2000});
   Kowalski.showAllData();
   

    return 0;
}
