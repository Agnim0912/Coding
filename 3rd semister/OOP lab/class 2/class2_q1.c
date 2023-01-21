//1) Write a program, enter a number and check whether it is prime number or not

#include <stdio.h>

int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is a prime number", a);
    }
    else{
        printf("%d is not a prime number", a);
    }
    return 0;
}