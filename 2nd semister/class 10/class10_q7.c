#include <stdio.h>

long long int factorial(int n) 
{
	long long int product = 1;
	for (int i = n; i >= 1; i--) 
	{
		product = product * i;
	}
	return product;
}

int main() 
{
	int n; 
	scanf("%d", &n);
    float sum = 0;
	for (int i = 1; i <= n;) 
	{
		int var = i - 1;
		sum = sum + ((float)i/factorial(var));
		//printf("%d/%lld\n", i, factorial(var));
        i = i+1;
	}
    printf("%f", sum);
}