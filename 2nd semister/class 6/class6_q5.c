#include <stdio.h>

int main()
{
    int inputVal;
    printf("Enter a number : ");
    scanf("%i", &inputVal);
    int middleTwo_r = inputVal & 0b00001000;
    int middleTwo_l = inputVal & 0b00010000;
    int temp;
    int temp1;
    temp = middleTwo_r >> 3;
    temp1 = middleTwo_l >> 4;
    printf("the middle bits are : %d%d\n", temp1, temp);
}