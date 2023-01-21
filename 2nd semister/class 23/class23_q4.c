#include <stdio.h>

void revArray(int *a, int *b, int size) 
{
    for(int i=0, j=size-1; i<size; i++, j--) 
    {
        *(b + i) = *(a + j);
    }
}

int main() 
{
    int n;
    printf("size (n) : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the first array : ");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", &a[i]);
    }
    revArray(a, b, n);
    printf("The second array containing the reverse of the first array is : ");
    for(int i=0; i<n; i++) 
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}