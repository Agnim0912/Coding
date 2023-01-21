#include <stdio.h>
float factorial (int nu)
{ 
    float i;
    float fact=1;
    for (float i=nu;i>0;i--)
        fact=fact*i;
    return fact;
}

int main()
{
    printf("Enter number :");
    float n,i;
    float sum=0;
    scanf("%f",&n);
    for (i=1;i<=n;i=i+2)
    {      
        float pro=factorial(i);
        sum=sum+(1/pro);
    }
   printf("%f",sum);
}