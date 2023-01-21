#include <stdio.h>

void swapEnds(int *num) {
    int firstDigit, lastDigit, middleDigits;
    firstDigit = *num/1000;
    lastDigit = *num%10;
    middleDigits = (*num/10)%100;
    *num = lastDigit*1000+middleDigits*10+firstDigit;
}

int main() {
    int num;
    printf("num : ");
    scanf("%d", &num);
    swapEnds(&num);
    printf("The resultant number with swapped first and last digit is : %d\n", num);
    return 0;
}