#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter value of a, b and c: ";
    cin>>a;    
    cin>>b;    
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Largest number: "<<a;
    }
    else if(b>a &&b>c)
    {
        cout<<"Largest number: "<<b;
    }
    else if(c>a && c>b)
    {
        cout<<"Largest number: "<<c;
    }
}   