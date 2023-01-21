#include <stdio.h>
int largest_in_1sttwo(int num1, int num2) {
	if (num1 > num2) {return num1;}
	else {return num2;}
}
int largest_in_2nd(int num3, int num4) {
	if (num3 > num4) {return num3;}
	else {return num4;}
}
int smallest_in_1st(int num1, int num2) {
	if (num1 < num2) {return num1;}
	else {return num2;}
}
int smallest_in_2nd(int num3, int num4) {
	if (num3 < num4) {return num3;}
	else {return num4;}
}
int main() {
	int num1, num2, num3, num4, largest, smallest;
	scanf("%d", &num1); scanf("%d", &num2); scanf("%d", &num3); scanf("%d", &num4);
	int temp1 = largest_in_1sttwo(num1, num2);
	int temp2 = largest_in_2nd(num3, num4);
	int temp3 = smallest_in_1st(num1, num2);
	int temp4 = smallest_in_2nd(num3, num4);
	if (temp1 > temp2) {largest = temp1;}
	else {largest = temp2;}
	if (temp3 < temp4) {smallest = temp3;}
	else {smallest = temp4;}
	printf("Largest Number is %d\n", largest);
	printf("Smallest Number is %d", smallest);
	return 0;
}