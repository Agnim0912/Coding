#include <stdio.h>
int main() {
	int n; printf("Enter N: "); scanf("%d", &n);
	int i = 1;
	float sum = 0;
	while (i <= n) {
		float j = 1;
		float var = i * i;
		sum = sum + (j / var);
		i++;
	}
	printf("%f", sum);
	return 0;
}