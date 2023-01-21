#include <stdio.h>

int main() {
    int sum=0, num, i=0;
    printf("Enter the number : ");
    scanf("%d", &num);
    P:
        sum += num%10;
        num = num/10;
    if(num!=0) {
        goto P;
    }
    printf("The sum of all the digits is : %d\n", sum);
}