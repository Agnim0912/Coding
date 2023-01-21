#include<stdio.h>
int main()
{
int a,n,r,factn,factr;
float ncr;
factn=1;
factr=1;
printf("Enter a value for n : ");
scanf("%d", &n);
printf("Enter a value for r : ");
scanf("%d", &r);
a=(n*(n-r));
while (n>0) {
factn=factn*n;
n--;
}
printf("factn=%d", factn);
printf("\n");
while (a>0) {
factr=factr*r;
a--;
}
printf("factr=%d", factr);
printf("\n");
printf("ncr=factn/factr= %d / %d", factn / factr);
printf("%f", ncr);
printf("\n");
return 0;
}
