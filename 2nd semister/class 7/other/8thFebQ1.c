#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b) {
		printf("Greatest Number: %d", a);
	}
	else {printf("Greates Number: %d", b);}
	return 0;
}