#include <stdio.h>

int main()
{
    int n, count, j;
    printf("enter number of rows");
    scanf("%d", &n);
    for (count=n;count>0; count--)
    {
        for (j=count; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}   