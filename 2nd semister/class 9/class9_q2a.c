#include <stdio.h>


int main()
{
    int n1=24;
    int n2=5;
    int num = 1;
    while (n2-1<n1)
    {
        printf("%d\n", n1);
        n1=25-num;
        num++;
    }
}