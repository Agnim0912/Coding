#include <stdio.h>

int main() {
    int inputVal;
    printf("Enter a number : ");
    scanf("%hhd", &inputVal);
    int middleTwo = inputVal&0b00011000;
    //middleTwo = middleTwo >> 15;
    printf("The middle two bits are : %d\n", middleTwo);
}