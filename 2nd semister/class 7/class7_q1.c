#include <stdio.h>

int main(){
    int a, b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is smaller than %d", b, a);
    }
    if (a<b)
    {
        printf("%d is smaller than %d", a, b);
    }
}