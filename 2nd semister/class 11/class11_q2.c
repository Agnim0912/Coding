#include <stdio.h>

int main(void)
{
    int n ,m;
    printf("the number divisible by 3 & 12 are:");
    scanf("%d%d",&n,&m);
    for(;n<=m;++n)  
    {
        if(n%3==0)
        {
            if(n%4==0)
            {
                printf("%d\n",n);
            }
        }
    }
}