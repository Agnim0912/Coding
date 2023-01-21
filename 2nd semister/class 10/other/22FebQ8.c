#include <stdio.h>

int main()
{
    int n, c, i;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf(" Sun      Mon     Tues      Wed      Thurs       Fri        Sat\n");
    i = 1;
    c = 0;
    while (c < n)
    {
        printf("       ");
        c++;
    }
    printf("  ");
    c -= 1;
    while (i <= 31)
    {
        if (c < 7)
        {
            if (i < 10)
                printf(" %d        ", i);
            else
                printf(" %d       ", i);
            c++;
            i++;
        }
        else
        {
            printf("\n");
            c = 0;
        }
    }
    return 0;
}