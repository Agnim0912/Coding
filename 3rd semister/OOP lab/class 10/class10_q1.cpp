//1. Write a program that throws and catches an integer exception.
// Handle the exception and print its value.

#include <iostream>
using namespace std;

int main()
{
    int n{0};
    cout<<"n: ";
    cin>>n;

    try
    {
        if(n<5)
        {
            throw n;
        }
    }
    catch(int x)
    {
        printf("Exception caught! (n=%d)\n", x);
    }
    return 0;
}