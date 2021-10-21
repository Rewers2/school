#include <iostream>

using namespace std;

class Dog
{
	public:
		string color;
		string eye_color;
		float height;
		float lenght;
		float weight;

		void sit()
		{
			cout<<"Pies siedzi";

		};

		void layDown()
		{
			cout<<"\nPies lezy";
		};

		void shake()
		{
			cout<<"\nPies macha ogonem";
		};

		void come()
		{
			cout<<"\n Pies przychodzi";
		};

        Dog(string p_color, string p_eye_color, float p_height, float p_lenght, float p_weight){
            color = p_color;
            eye_color = p_eye_color;
            height = p_height;
            lenght = p_lenght;
            weight = p_weight;
            cout<<"kolor: "<<color<<endl;
            cout<<"kolor oczu: "<<eye_color<<endl;
            cout<<"height: "<<height<<endl;
            cout<<"lenght: "<<lenght<<endl;
            cout<<"weight: "<<weight<<endl;


        }
};

int main(int argc, char** argv)
 {

Dog burel("brown", "blue", 30, 40, 50);
 	

	return 0;
}