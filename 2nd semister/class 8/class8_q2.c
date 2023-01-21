#include <stdio.h>
#include <stdbool.h>

bool check_leap_year(int year) {
	if ((year % 400) == 0) {return true;}
	else if (year % 100 == 0) {return false;}
	else if (year % 4 == 0) {return true;}
	else {return false;}
}

int main() {
	int year; scanf("%d", &year);
	bool answer = (check_leap_year(year));
	printf("%d", answer);
	return 0;
}