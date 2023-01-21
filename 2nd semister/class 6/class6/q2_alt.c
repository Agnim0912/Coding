#include <stdio.h>

int main() {
    float inputVal;
    scanf("%f", &inputVal);
    float a = inputVal*100;
    int b = a;
    float decVal = (a - b)/100.0;
    float ans = (decVal>=0.005)?(inputVal+(0.01 - decVal)):(inputVal-decVal);
    printf("%f", ans);
    return 0;
}