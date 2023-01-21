#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int arr2[] = { 6, 7, 8, 9, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int mid = size / 2;
	int temp[size]; int temp2[size];
	int k = mid + 1; int p = 0;
	for (int i = 0; i <= mid; i++) {
		temp[i] = arr[k];
		temp2[i] = arr2[k];
		k++;
	}
	for (int i = mid + 1; i < size; i++) {
		temp[i] = arr[p];
		temp2[i] = arr2[p];
		p++;
	}
	temp[mid] = arr[mid];
	temp2[mid] = arr2[mid];
	for (int i = 0; i < size; i++) {
		printf("%d ", temp[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", temp2[i]);
	}
}