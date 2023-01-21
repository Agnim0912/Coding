#include <stdio.h>

int chkPair(int A[], int size, int x) 
{
    for (int i = 0; i < (size - 1); i++) 
    {
        for (int j = (i + 1); j < size; j++) 
        {
            if (A[i] + A[j] == x) 
            {
                printf("Pair with a given sum %d is (%d, %d)\n", x, A[i], A[j]);
                return 1;
            }
        }
    }
    return 0;
}

int main(void) 
{
    int size, x;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int A[size];

    printf("Enter the elements of the array : \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the sum to be searched : ");
    scanf("%d", &x);
    if (chkPair(A, size, x)) 
    {
        printf("Valid pair exists\n");
    }
    else 
    {
        printf("No valid pair exists for %d\n", x);
    }
    return 0;
}