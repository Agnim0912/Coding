#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            printf("\n%d is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n%d is the 2nd largest number\n", c);
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            printf("\n%d is the 2nd largest number\n",a);
        }
        else
        {
            printf("\n%d is the 2nd largest number\n",c);
        }
    }
    else if(a >= b)
    {
        printf("\n%d is the 2nd largest number\n", a);
    }
    else
    {
        printf("\n%d is the 2nd largest number\n", b);
    }
    return 0;
}