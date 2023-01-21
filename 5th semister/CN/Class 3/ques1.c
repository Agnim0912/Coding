#include <stdio.h>
int bin_search();
int main()
{
    int i, n, target;
    printf("Enter the number of elements of an array: \n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array in increasing order: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    bin_search(nums, target, n);
}
int bin_search(int arr[], int tar, int a)
{
    int low = 0, high = a - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == tar){
            printf("The target element %d was found at position %d", tar, mid + 1);
            break;
        }
        else if (arr[mid] < tar)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    if (low > high){
        printf("Not found! %d isn't present in the list.", tar);
    }
}