#include<iostream>
using namespace std;
void test(int a)
{
 	try{
	if(a==1) 
	  throw a;  
	else if (a==0) 
	  throw 'a'; 
	else if (a==-1) 
	  throw 1.0; 
	cout << "End of try block";
	}
	catch(char c)
	{
	cout<<"Caught an Character \n";
	}
	catch(int m)
	{
	cout<<"Caught an integer \n";
	}
	catch(double d)
	{
	cout<<"Caught a float \n";
	}
	cout<<"End of Try -Catch block";
}
int main()
{
test(1);
test(0);
test(-1);
test(2);   
    
}