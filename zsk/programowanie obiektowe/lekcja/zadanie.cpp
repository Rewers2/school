#include <iostream>
using namespace std;

class Date{
public:

    unsigned short int d;
    unsigned short int m;
    unsigned short int rrrr;

    void date(unsigned short int d; unsigned short int m; unsigned short int rrrr);
    void showALL();



};

void::Date::showALL()
{
    cout<<"obecna data: "<<d<<"/"<<m<<"/"<<rrrr;

}

void::Date::date(unsigned short int sd; unsigned short int sm; unsigned short int srrrr; )
{
    unsigned short int d = unsigned short int sd;
    unsigned short int m = unsigned short int sm;
    unsigned short int rrrr = unsigned short int srrrr;
}


int main()
{

    Date Time;

    Time.date({3},{4},{2005});
    Time.showALL();

    return 0;
}