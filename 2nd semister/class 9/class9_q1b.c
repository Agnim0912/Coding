#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int num = 1;
    while (num<n+1)
    {
        printf("%d\n", num);
        num++;
    }
}