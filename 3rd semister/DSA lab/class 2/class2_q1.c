#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void sort(int arr[], int size)
{
    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        while (arr[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 

 
int main()
{
    int arr[10];
    printf("enter an array of size 10: ");
    for(int j=0; j<10; j++)
    {
        scanf("%d", &arr[j]);
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    sort(arr, arr_size);
 
    printf("Array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
 
    return 0;
}