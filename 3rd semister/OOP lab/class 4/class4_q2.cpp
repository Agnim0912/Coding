#include <iostream>
using namespace std;

//void swap(int &, int &);
void swap(int *a, int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
}

int main()
{
    int input1, input2;
    cout<<"enter a number: ";
    cin>>input1;
    cout<<"enter second number: ";
    cin>>input2;
    swap(&input1, &input2);
    cout<<input1<<" "<<input2;
    
}
