#include <stdio.h>

int main()
{
    char arr[] = {'A', 'B', 'C', 'D', 'E', '\0'}, *ptr;
    int i, j;
    for(i = 0; i < 5; i++)
    {
        ptr = &arr[i];
        for(j = i; j < 5; j++)
        {
            printf("%c ", *ptr);
            ptr++;
        }
        printf("\n");
    }
    printf("\n");
    for(i = 5; i >= 0; i--)
    {
        for(j = i; j <=5; j++)
        {
            ptr = &arr[j];
            printf("%c ", *ptr);
            ptr--;
        }
        printf("\n");
    }
    printf("\n");
    for(i = 4; i >= 0; i--)
    {
        ptr = &arr[i];
        for(j = i; j >= 0; j--)
        {
            printf("%c ", *ptr);
            ptr--;
        }
        printf("\n");
    }
}
