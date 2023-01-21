#include <stdio.h>

int factorial(int n) {
	int product = 1;
	for (int i = n; i >= 1; i--) {
		product = product * i;
	}
	return product;
}

int main() {
	int n; scanf("%d", &n);
	int sum = 1;
	for (int i = 2; i <= n; i++) {
		int var = i - 1;
		printf("%d/%d\n", i / factorial(var));
	}
	return 0;
}