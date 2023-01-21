#include <stdio.h>

int main() {
    unsigned char a, b;
    printf("Enter the first number: ");
    scanf("%hhd", &a);
    printf("Enter the second number: ");
    scanf("%hhd", &b);
    int last = (a&0x0F) << 4;
    a = (a&0xF0);
    int first = (b&0xF0) >> 4;
    b = (b&0x0F);
    a = a|first;
    b = last|b; 
    printf("First %i\n", a);
    printf("Second %i", b);
    return 0;
}