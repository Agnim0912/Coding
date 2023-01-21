#include <stdio.h>

int main() {
    int inputVal;
    printf("Enter a number : ");
    scanf("%i", &inputVal);
    int middleTwo = inputVal&0b00011000;
    middleTwo = middleTwo >> 1;
    printf("The middle two bits are : 0x%i\n", middleTwo);
}