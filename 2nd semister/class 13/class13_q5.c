#include <stdio.h>

int main()
{
    int i,j,k;
    k=15;
    for(i=5;i>=1;i--)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",k);
                k--;
            }
        }
        else
        {
            for(j=k-i+1;j<=k;j++)
            printf("%d ",j);
            k=k-i;
        }
        printf("\n");
    }
}


