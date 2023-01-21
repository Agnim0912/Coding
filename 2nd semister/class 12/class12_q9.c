#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter a number upto which u want to proceed : ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            if (j==1||i==j||i==n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
