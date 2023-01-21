#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n, factorial=1;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    cout<<"factorial of given number: "<<factorial;
}   