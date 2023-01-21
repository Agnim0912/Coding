#include <stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (0<a)
    {
        printf("%d is is positive", a);
    }
    else if (0>a)
    {
        printf("%d is negetive", a);
    }
    else{
        printf("the number is neither positive nor negetive");
    }
}