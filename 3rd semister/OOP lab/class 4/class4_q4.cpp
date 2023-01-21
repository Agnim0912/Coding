#include <iostream>
using namespace std;

inline int circle(int r)
{
    return 3.14*(r*r);
}

inline int cube(int n)
{
    return n*n*n;
}

inline int faren(int temp)
{
    return (temp*9/5) +32;
}
int main()
{

    int input1, input2, input3;
    cout<<"enter radius: ";
    cin>>input1;

    cout<<"enter a number: ";
    cin>>input2;
    
    cout<<"enter temp in C: ";
    cin>>input3;
    
    cout<<"Area of a circle: "<<circle(input1)<<endl;
    cout<<"Cube: "<<cube(input2)<<endl;
    cout<<"Temp in Farenheit: "<<faren(input1)<<endl;
    
}
