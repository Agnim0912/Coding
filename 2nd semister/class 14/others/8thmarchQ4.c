#include <stdio.h>
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int sum = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++) {
		if (arr[i] % 2 != 0) {
			sum = sum + arr[i];
		}
	}
	printf("Sum of all the odd elements in array is: %d", sum);
}