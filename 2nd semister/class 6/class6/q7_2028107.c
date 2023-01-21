#include <stdio.h>

int main() {
    int inputVal, firstBitGroup, secondBitGroup, thirdBitGroup, fourthBitGroup;
    printf("Enter a number : ");
    scanf("%i", &inputVal);
    printf("%i", sizeof(inputVal));
    firstBitGroup = (inputVal&0xFF000000) >> 24;
    secondBitGroup = (inputVal&0x00FF0000) >> 16;
    thirdBitGroup = (inputVal&0x0000FF00) >> 8;
    fourthBitGroup = (inputVal&0x000000FF);
    printf("All the 8bit groups are : 0x%x 0x%x 0x%x 0x%x\n", firstBitGroup, secondBitGroup, thirdBitGroup, fourthBitGroup);
}
