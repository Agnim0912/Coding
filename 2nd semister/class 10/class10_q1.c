#include <stdio.h>

int main(){
    int sum, input;
    sum = 0;
    char choose;
    choose = 'y';
    while (choose=='y')
    {
        printf("enter a number: ");
        scanf("%d", &input);
        sum+=input;
        printf("Do you want to continue?? y or n: ");
        scanf(" %c", &choose);
    }
    printf("%d", sum);
}