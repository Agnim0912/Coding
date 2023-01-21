#include <stdio.h>

int main() {
    int inputVal;
    printf("Enter a number : ");
    scanf("%d", &inputVal);
    int lastDigit = inputVal%10;
    int roundUpValue = (lastDigit>=5)?inputVal+(10-lastDigit):inputVal-lastDigit;
    printf("The round up value is : %d\n", roundUpValue);
    return 0;
}