#include <stdio.h>

int main(){
    int input, input2, i;
    i = 0;
    int sum = 0;
    char choose;
    printf("enter a number: ");
    scanf("%d", &input);
    printf("enter 2nd number: ");
    scanf("%d", &input2);
    for (i=input;i<input2; i++)
    {
        if ((i%7==0)&&(i%3==0))
        {
             sum += i;
        }
    }    
    printf("sum of all odd numbers: %d", sum);
}