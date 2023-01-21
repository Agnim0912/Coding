//4. Write a program to accept 10 integers in an array . Check all numbers in the array. 
//When any negative number is found , throw an exception.

#include <iostream>
using namespace std;
int main()
{
	int input[10], n;
	try
	{
		cout << "How many elements do you want to input? ";
		cin >> n;
		string s = "Array out of bounds Exception Caught";
		if(n > 10)
        {
            throw (s);
        }
		else
		{
			cout << "Input elements\n";
			for (int i = 0; i < n; i++)
			{
				cin >> input[i];
			}

			for (int i = 0; i < n; i++)
			{
				if (input[i] < 0) 
                {
                    throw (input[i]);
                }
			}
		}
	}

	catch (int i)
	{
		cout << "Negative Number Exception Caught:"<<i;
	}
    

	return 0;
}