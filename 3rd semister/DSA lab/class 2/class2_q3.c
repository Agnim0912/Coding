#include <stdio.h>
#include <stdlib.h>
 
// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n)
{
    int c, d, t;
 
	for (c = 0 ; c < ( n - 1 ); c++)
	{
		for (d = 0 ; d < n - c - 1; d++)
		{
			if (arr[d] > arr[d+1])		
			{
				/* Swapping */
		
				t         = arr[d];
				arr[d]   = arr[d+1];
				arr[d+1] = t;
			}
		}
	}
}
 
// Driver program to test above methods
int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
	kthSmallest(arr, n);
    printf("K'th smallest element is %d\n", arr[0]);
    printf("K'th largest element is %d", arr[n-1]);
    return 0;
}