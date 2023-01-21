#include <stdio.h>
int main() {
	int n; printf("Enter N: "); scanf("%d", &n);
	int i = 1;
	float sum = 0;
	while (i <= n) {
		float var = i * i;
		sum = sum + (1.0 / var);
		i++;
	}
	printf("%f", sum);
	return 0;
}