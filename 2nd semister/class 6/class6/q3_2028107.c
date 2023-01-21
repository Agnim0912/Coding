#include <stdio.h>

int main() {
    int a,b,c,d, smallest, secondsmallest;
    printf("Enter 4 numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    (a>b)?(smallest = b, secondsmallest = a):(smallest = a, secondsmallest = b);
    (c<smallest)?(secondsmallest = smallest, smallest = c):((c<secondsmallest)?secondsmallest = c:1);
    (d<smallest)?(secondsmallest = smallest, smallest = d):((d<secondsmallest)?secondsmallest = d:1);
    printf("The smallest number is : %d\nThe second smallest number is : %d\n", smallest, secondsmallest);
    return 0;
}