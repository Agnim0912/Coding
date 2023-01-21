#include <stdio.h>

int words(int word) {
	switch (word) {
	case 1: printf("One "); break;
	case 2: printf("Two "); break;
	case 3: printf("Three "); break;
	case 4: printf("Four "); break;
	case 5: printf("Five "); break;
	case 6: printf("Six "); break;
	case 7: printf("Seven "); break;
	case 8: printf("Eight "); break;
	case 9: printf("Nine "); break;
	}
	return 0;
}

int main() {
	int num; scanf("%d", &num);
	int digit1 = (num / 10) % 100;
	int digit2 = (num / 1) % 10;
	words(digit1);
	words(digit2);
	return 0;
}