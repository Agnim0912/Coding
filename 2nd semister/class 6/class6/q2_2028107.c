#include <stdio.h>

int main() {
    float inputVal;
    printf("Enter a number : ");
    scanf("%f", &inputVal);
    int convReal = (inputVal*1000);
    int lastDigit = convReal%10;
    int intPart = inputVal;
    float decPart = inputVal - intPart;
    int a = decPart*100;
    float b = intPart + a/100.0;
    float reqPart = inputVal - b;
    printf("%f", reqPart);
    float roundUpValue = (lastDigit>=5)?inputVal+(0.01-reqPart):inputVal-reqPart;
    printf("The round up value is : %f\n", roundUpValue);
    return 0;
}