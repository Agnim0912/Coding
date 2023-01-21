/*2. Write a program for reading data simultaneously from two files and display the contents  */

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	const int size = 80;
	char line[size];
	ifstream fin1, fin2;
	fin1.open("Source1.txt");
	fin2.open("Source2.txt");
	for (int i = 1; i <= 10; i++)
	{
		if (fin1.eof() != 0)
		{
			cout << "End of files." << endl;
			exit(1);
		}
		fin1.getline(line, size);
		cout << line << "\n";
		if (fin2.eof() != 0)
		{
			cout << "Exit from the Capital.";
			exit(1);
		}

		fin2.getline(line, size);
		cout << line << "\n";
	}
	return 0;
}