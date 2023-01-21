#include <stdio.h>
int length(int n) {
	int count = 0;
	while (n) {
		count++;
		n = n / 10;
	}
	return count;
}
int main() {
	printf("Enter n: ");
	int n; scanf("%d", &n);
	printf("\n");
	int ans = length(n);
	printf("Number of digits in n is: %d", ans);
	return 0;
}