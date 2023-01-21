#include <stdio.h>

int main() {
	printf("Enter n: ");
	int n; scanf("%d", &n);
	int arr[n]; int arr2[n];
	int var1 = 17; int var2 = 17;
	for (int i = 0; i < n; i++) {
		arr[i] = var1;
		var1 = var1 + 2;
	}
	printf("a: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = n; i >= 0; i--) {
		arr2[i] = var2;
		var2 = var2 + 2;
	}
	printf("b: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr2[i]);
	}
}