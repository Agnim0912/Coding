#include <stdio.h>
int main()
{
	int n = 1;
	for (int i = 1; i <= 5; i++) {
		int t = 6 - i;
		for (int j = 5; j >= i; j--) {
			if (i % 2 != 0) {
				printf("%d  ", n++);
			}
			else {
				printf("%d  ", n + j - i);
				if (j == i)
					n += t;
			}
		}
		printf("\n");
	}
}