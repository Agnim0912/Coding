#include <stdio.h>
int main() {
    unsigned char inputVal;
    printf("Enter a number : ");
    scanf("%hhd", &inputVal);
    unsigned char firstFourBits = inputVal&0xF0;
    firstFourBits = firstFourBits>>4;
    unsigned char lastFourBits = inputVal&0x0F;
    printf("In sequence : %x%x\n", firstFourBits, lastFourBits);
    lastFourBits = lastFourBits<<4;
    unsigned char interchanged = lastFourBits|firstFourBits;
    printf("Interchanged : 0x%x", interchanged);
    return 0;
}
