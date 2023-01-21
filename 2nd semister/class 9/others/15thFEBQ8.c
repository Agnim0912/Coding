#include <stdio.h>
int main() {
	int n; printf("Enter N: "); scanf("%d", &n);
	int product = 1;
	while (n >= 1) {
		product = product * n;
		n--;
	}
	printf("%d ", product);
	return 0;
}