#include <iostream>

using namespace std;

class Rectangle{

public:

float width,height;

float field();
float circuit();
void result();

};

float Rectangle::circuit(){

    float circuit=(2*width)+(2*height);

    return circuit;
};

float Rectangle::field(){

    float field=height*width;

    return field;
};

void Rectangle::result(){

    cout<<"pole wynosi "<<field()<<"a obwod wynosi"<<circuit();
};

int main(){

    Rectangle p;

    cout<<"podaj szerokosc "<<endl;
    cin>>p.width;
    cout<<"podaj wysokosc "<<endl;
    cin>>p.height;

    p.result();



    return 0;
}