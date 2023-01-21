#include <stdio.h>
    int fibonacci(int a,int b)
    {
        printf("%d %d\t",a,b);
        for (int i=0;i<11;i++)
            {int c=a+b;
            printf("%d\t",c);
            a=b;
            b=c;}
            return 0;
            
        
    }

int main()
{
   int n,m,fib;
   printf("Enter n and m :");
   scanf("%d%d",&n,&m);
   fib=fibonacci(n,m);

    return 0;
}