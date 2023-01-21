#include <stdio.h>

int main() {
	int n;
	printf("Enter The Value of n: ");
	scanf("%u", &n);
	for (int i = 0; i < 4; i++) {
		for (int y = i; y < n; ++y) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("1 ");
		}
		printf("\n");
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int y = i; y < n; ++y) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("1 ");
		}
		printf("\n");
	}
}