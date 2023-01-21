#include <iostream>
#include <iomanip>
int const size = 3;
using namespace std;
template < class M, class S>
	void add(M a[][size], S b[][size])
	{
		S c[size][size];
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << "\t" << c[i][j];
			}

			cout << endl;
		}
	}
int main()
{
	int x[size][size], y[size][size];
	float g[size][size], h[size][size];
	int ch;


	cout << endl << "Enter values for Integer Matrix (Only Integers): " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> x[i][j];
		}
	}

	cout << endl << "Enter values for Float Matrix (Only Float): " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> g[i][j];
		}
	}
	cout << endl << endl << "The Integer Matrix by the user:" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << x[i][j] << "  ";
		}

		cout << endl;
	}

	cout << endl << endl << "The Float Matrix by the user:" << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << g[i][j] << "  ";
		}

		cout << endl;
	}
	cout << "Result of the Matrix Addition is: " << endl;
	add(x, g);
	return 0;
}