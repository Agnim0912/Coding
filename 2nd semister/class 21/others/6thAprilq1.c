#include <stdio.h>
#include <limits.h>
int main() {
	int arr[5] = { -41, -32, -76, -78, -1};
	int * ptr = arr;
	int max = INT_MIN;
	int max_2 = INT_MIN;

	for (int i = 0; i < 5; i++) {
		if (*(arr + i) > max) {max = *(arr + i);}
	}

	for (int i = 0; i < 5; i++) {
		if (*(arr + i) != max) {
			if (*(arr + i) > max_2) {max_2 = *(arr + i);}
		}
	}
	printf("max = %d\n", max);
	printf("2nd max = %d\n", max_2);
	return 0;
}