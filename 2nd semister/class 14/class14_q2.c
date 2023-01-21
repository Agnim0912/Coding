#include<stdio.h>
int main() {
	printf("Enter n: ");
	int n; scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}