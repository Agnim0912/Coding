#include <stdio.h>
int largest1(int num1, int num2) {
	if (num1 > num2) {return num1;}
	else {return num2;}
}
int largest2(int num3, int num4) {
	if (num3 > num4) {return num3;}
	else {return num4;}
}
int smallest1(int num1, int num2) {
	if (num1 < num2) {return num1;}
	else {return num2;}
}
int smallest2(int num3, int num4) {
	if (num3 < num4) {return num3;}
	else {return num4;}
}
int main() {
	int num1, num2, num3, num4, largest, smallest;
	scanf("%d", &num1); 
    scanf("%d", &num2); 
    scanf("%d", &num3); 
    scanf("%d", &num4);
	int t1 = largest1(num1, num2);
	int t2 = largest2(num3, num4);
	int t3 = smallest1(num1, num2);
	int t4 = smallest2(num3, num4);
	if (t1 > t2) 
    {
        largest = t1;
    }
	else 
    {
        largest = t2;
    }
	if (t3 < t4) 
    {
        smallest = t3;
    }
	else 
    {
        smallest = t4;
    }
	printf("Largest : %d\n", largest);
	printf("Smallest : %d", smallest);
	return 0;
}