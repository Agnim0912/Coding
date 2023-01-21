#include <stdio.h>

int main() {
    int input, first, second, third, fourth, n;
    printf("Enter a number: ");
    scanf("%i", &input);
    first = input&0xFF000000;
    second = (input&0x00FF0000)>>8;
    third = (input&0x0000FF00)<<8;
    fourth = (input&0x000000FF);
    n = first|second|third|fourth;
    printf("Original: 0x%x 0x%x 0x%x 0x%x\n", first, second, third, fourth);
    printf("After Shuffling : 0x%x 0x%x 0x%x 0x%x\n", first, third, second, fourth);
    printf("The Integer: 0x%x\n", n);
    return 0;
}