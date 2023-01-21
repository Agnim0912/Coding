#include <stdio.h>
int main() {
	int n; printf("Enter N: "); scanf("%d", &n);
	int i = 1; int sum = 0;
	while (i <= n) {
		sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}