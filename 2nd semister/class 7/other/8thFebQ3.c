#include <stdio.h>

int smallest_among_two(int num1, int num2) {
	if (num1 < num2) {return num1;}
	else {return num2;}
}


int largest_among_two(int num1, int num2) {
	if (num2 > num1) {return num2;}
	else {return num1;}
}


int main() {
	int num1, num2, num3, temp;
	scanf("%d", &num1); scanf("%d", &num2); scanf("%d", &num3);

	int temp2 = smallest_among_two(num1, num2);
	int smallest; int largest;

	if (temp2 < num3) {smallest = temp2;}
	else {smallest = num3;}
	printf("Smallest Number is: %d\n", smallest);
	int temp3 = largest_among_two(num1, num2);
	if (num3 > temp3) {largest = num3;}
	else {largest = temp3;}
	printf("Largest Number is: %d\n", largest);
	int second_largest = (num1 + num2 + num3) - (smallest + largest);
	printf("2nd Largest Number is: %d\n", second_largest);

	return 0;
}