#include <stdio.h>
int main() {
    unsigned char input;
    printf("Enter a number: ");
    scanf("%hhd", &input);
    //printf("%x\n", input);
    unsigned char first = input&0xF0>>4;
    unsigned char last = input&0x0F<<4;
    printf("In sequence : %x%x\n", first, last);
    unsigned char interchanged = first|last;
    printf("Interchanged : %x", interchanged);
    return 0;
}