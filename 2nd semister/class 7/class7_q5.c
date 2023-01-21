#include <stdio.h>
int main() {
	int num; 
    scanf("%d", &num);
	int num2; 
    scanf("%d", &num2);
	int year = ((num / 1000) % 10) * 1000 + ((num / 100) % 10) * 100 + ((num / 10) % 10) * 10 + ((num / 1) % 10) * 1;
	int month =  ((num / 100000) % 10) * 10 + (((num / 10000) % 10) ) * 1;
	int day = (((num / 1000000) % 10) * 1 + ((num / 10000000) % 10) * 10 );
	int year2 = ((num2 / 1000) % 10) * 1000 + ((num2 / 100) % 10) * 100 + ((num2 / 10) % 10) * 10 + ((num2 / 1) % 10) * 1;
	int month2 =  ((num2 / 100000) % 10) * 10 + (((num2 / 10000) % 10) ) * 1;
	int day2 = (((num2 / 1000000) % 10) * 1 + ((num2 / 10000000) % 10) * 10 );
	if (year != year2) {
		if (year > year2) 
        {
            printf("%d", num); printf(" is the earliest");
        }
		else 
        {
            printf("%d", num2); printf(" is the earliest");
        }
	}
	else {
		if (month != month2) {
			if (month > month2) 
            {
                printf("%d", num); printf(" is the earliest");
            }
			else 
            {
                printf("%d", num2); printf(" is the earliest");
            }
		}
		else {
			if (day > day2) 
            {
                printf("%d", num); 
                printf(" is the earliest");
            }
			else {printf("%d", num2); printf(" is the earliest");}
		}

	}
	return 0;
}