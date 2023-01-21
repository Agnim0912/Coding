#include<stdio.h>

int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter number of elements in array: ");
    scanf ("%d", &elem);
    printf ("Enter elements in array: ");
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        //printf ("Enter another number:");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
    printf ("The largest number is %d\n", lar);
    printf ("The smallest number is %d", sm);
    return 0;
}