#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter a number upto which u want to proceed : ");
scanf("%d", &n);
for (i=1;i<=n+1;i++)
{
for (j=0;j<i;j++)
{
if (i%2==0)
{
printf("%d", j+1);
}
else 
{
printf("1");
}
}
printf("\n");
}
return 0;
}
