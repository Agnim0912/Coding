//Create a class complex which stores real and imaginary part of a complex number. 
//Include all types of constructors and destructor.
//The destructor should display amessage about the destructor being invoked. 
//Create objects using different constructors and display them.

#include <iostream>
using namespace std;

class complex
{
    int real=0, img=0;
    public:
        complex()
        {
            cout<<"default constructor initialised"<<endl;
            cout<<"enter real number"<<endl;
            cin>>real;
            cout<<"enter imaginary number"<<endl;
            cin>>img;
        }
        complex(int r, int i)
        {
            cout<<"parameterized constructor initialised"<<endl;
            real=r;
            img=i;
        }
        complex(complex &c)
        {
            cout<<"copy constructor initialised"<<endl;
            real=c.real;
            img=c.img;
        }
        int display()
        {
            cout<<"Complex number:"<<real<<"+"<<img<<"i"<<endl;
        }
        ~complex(){
            cout<<"destructor initialized"<<endl;
        }
};

int main()
{
    int real, img;
    cout<<"enter real number"<<endl;
    cin>>real;
    cout<<"enter imaginary number"<<endl;
    cin>>img;
    complex c1, c2(real, img), c3(c2);
}