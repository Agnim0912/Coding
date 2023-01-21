#include <stdio.h>
void pattern (int no)
{
    for (int i=0;i<no;i++)
    {    for (int j=i;j<no;j++)
        printf("*");
    printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    pattern(n);
}