#include <stdio.h>
int main()
 {
     int n,a=0,va=1;
     printf("Enter the value");
     scanf("%d",&n);
     while((n-a)>=1)
     {
         va=va*(n-a);
         a=a+3;
    }
    printf("\nThe sum is %d",va);
    return 0;

 }
