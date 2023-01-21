#include <stdio.h>
int main() {
	int num, count = 0;
	scanf("%d", &num);
	while (num != 0) {
		num /= 10;
		count = count + 1;
	}
	printf("Number of digits: %d\n", count);
	int mid = count / 2;
	printf("Middle digit: %d", mid + 1);

	return 0;
}