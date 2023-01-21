#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// Driver code
int main()
{
    int n ;
    printf("Enter the size of the Array\n");
    scanf("%d",&n);
        int arr[n];
        printf("Enter the array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    int  length=sizeof(arr)/sizeof (arr[0]);
    int min=arr[0];
    n=fork();
    if(n>0)
    {
    for (int i = 0; i < length; i++) 
    {
            //Compare elements of array with min
        if(arr[i] < min)
            min = arr[i];
    }
        
    printf("Parent process\n");
    printf("Smallest element present in given array: %d\n", min); 
        
    }

    else
    {
    for (int i = 0; i < length; i++) 
    {

        if(arr[i] < min)
            min = arr[i];
    }
    if(min%5==0)
    {
    printf("Child process\n");
    printf("The minimum  element present in given array is divisible by 5\n");
    }
    }
    return 0;
}
