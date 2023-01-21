#include <stdio.h>
int main(){
    printf("enter a 4 digit number:");
    int num;
    scanf("%d",&num);
    int a = num%100;
    int a2 = a/10;
    int a1 = a%10;
    if (a1>4)
        a2++;
    int n = (num/100)*100+(a2*10);
    printf("\nThe number is: %d", n);

}