#include <stdio.h>

int main() {
    int num, i=1;
    printf("Enter a number to print the multiplication table : ");
    scanf("%d", &num);
    P:
        printf("%d * %d = %d\n", num, i++, num*i);
    if(i<=10) goto P;
    return 0;
}