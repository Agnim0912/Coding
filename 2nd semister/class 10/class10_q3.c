#include <stdio.h>

int main(){
    int input;
    int sum = 0;
    char choose;
    choose = 'y';
    while (choose=='y')
    {
        printf("enter a number: ");
        scanf("%d", &input);
        printf("Do you want to continue?? y or n: ");
        scanf(" %c", &choose);
        if (!(input%2==0))
        {
            sum += input;
        }
    }
    printf("sum of all odd numbers: %d", sum);
}