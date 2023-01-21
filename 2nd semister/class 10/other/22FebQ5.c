#include <stdio.h>
int main() {
	printf("Enter the lower limit: ");
	int a; scanf("%d", &a);
	printf("Enter the upper limit: ");
	int b; scanf("%d", &b);
	int i = a;
	printf("The numbers whose perfect square lies in between the given range is: \n");
	while (i <= b) {
		int j = 1;
		while (j <= i) {
			int sq = j * j;
			if (sq == i) {printf("%d\n", j);}
			j++;
		}

		i++;
	}
	return 0;
}