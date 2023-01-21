#include <stdio.h>

int main() {
	int arr[] = {2, 9, 6, 4, 8, 7, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = arr[size - 1]; int sum = 0;
	printf("multiples of %d present in the array are:- ", key);
	for (int i = 0; i < size; i++) {
		if (arr[i] % key == 0) {
			sum = sum + arr[i];
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	printf("Summation of multiples of %d present in the array is:- %d", key, sum);
}