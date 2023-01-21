#include <stdio.h>
int summation(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			sum = sum + arr[i];
		}
	}
	return sum;
}
int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int ans = summation(arr);
	printf("%d\n", ans);
}