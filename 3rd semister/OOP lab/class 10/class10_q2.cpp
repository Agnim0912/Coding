//2. Write a program that can throw integer and double exceptions in the same try block. 
//Implement the exception handling blocks for both exceptions.

#include <iostream> 
using namespace std; 
void test(int x)
{
	try
	{
		if (x == 1) throw x;
		else if (x == -1) throw 1.0;
		cout << "End of try block program." << endl;
	}	
	catch (int m)
	{
		cout << "Exception caught an integer" << endl;
	}
	catch (double d)
	{
		cout << "Exception caught a float" << endl;
	}
	cout << "End of Try-Catch block." << endl;
}

int main()
{
	cout << "Program begins." << endl; 
	cout << "Test input: (1)" << endl; 
	test(1);
	cout << "Test input: (-1)" << endl; 
	test(-1);
	return 0;
}