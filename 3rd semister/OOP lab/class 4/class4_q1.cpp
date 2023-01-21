#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int input, value;
    cout<<"enter a number: ";
    cin>>input;
    value=factorial(input);
    cout<<"factorial of the number is: "<<value;
}

int factorial(int n)
{
    if(n<0)
    {
        return(-1);
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return(n*factorial(n-1));
    }
}