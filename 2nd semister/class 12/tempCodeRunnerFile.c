#include <stdio.h>

int main()
{
    int n, count=1, j;
    printf("enter number of rows");
    scanf("%d", &n);
    for (;count<=n; count++)
    {
        for (j=1; j<=count; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}