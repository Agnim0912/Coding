#include <iostream>
using namespace std;

class test1;
class test2
{
    int number;
    public:
	int value(int num1)
	{
		number=num1;
	}
	friend void add(test2,test1);
};

class test1{
    int number;
    public:
	int value(int num2)
	{
		number=num2;
	}
	friend void add(test2,test1);
};
void add(test2  A, test1 B )
{
    cout<<"sum= "<<A.number+B.number;
}
int main(){
    test2 A;  
    test1 B;
    A.value(10);
    B.value(105); 
    add(A,B); 
}
