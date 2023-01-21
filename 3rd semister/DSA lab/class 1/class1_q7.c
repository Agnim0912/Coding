#include <stdio.h>

int main()
{
    int n, i, a, b, c=0, d=2;
    printf("enter size of array:");
    scanf("%d", &n);
    printf("enter value of array:");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n enter lowest and highest value");
    scanf("%d %d", &a, &b);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a || arr[i]==b)
        {
            c++;
            d=0;
        }
        if(arr[i]>a && arr[i]<b)
        {
            c++;
        }
    }
    printf("Number of elements in between two elements (Inclusive) = %d",c+d);
}