#include <iostream>
using namespace std;

int pals(int n) {  
    int remainder;
    int reverse=0;
    while(n>0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;     
    }
    return reverse;
}

int main() 
{
    int num;
    cout<<"Input Desired Number: ";
    cin >>num;

    if(pals(num)==num) 
    {
        cout <<num<<" is a palindrome";  
    }
    else 
    {
        cout <<num<<" is not a palindrome";
    }
    return 0;
}