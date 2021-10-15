#include <iostream>
using namespace std;


struct Date
{
    int d,m,y;
};


class Worker{
    public:
    int id = 1;
    string name = "Janusz";
    string surname = "Nowak";
    Date birthday = {20,10,2021};
    
    void getData();

    Worker(int id, string name, string surname, Date birthday);

};

void Worker::getData()
{
    cout<<"ID:"<<Worker::id;
    cout<<"\nImie i nazwisko: "<<Worker::name<<"-"<<Worker::surname;
    cout<<"\nData urodzenia: "<<Worker::birthday.d<<"-"<<Worker::birthday.m<<"-"<<Worker::birthday.y<<endl;
}

int main()
{

    setlocale(LC_CTYPE,"polish");

    //nowak.getData();

    Worker nowak(10,"Janusz"," Nowak",{15,10,2021});

    Worker * wsk;
    wsk= &nowak;
    wsk->getData();

    return 0;
}
