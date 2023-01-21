#include <stdio.h>

int main()
{
    int arr[10]={23, 53, 12, 33, 23, 29, 17, 47, 63, 20};
    int size=10, i,max, min;
    max = arr[0]; 
    for(i = 1; i < size; i++){
        if(max < arr[i])   
         max= arr[i]; 
    }
     printf("The largest element is: %d\n", max);
    min = arr[0];   
    for(i = 1; i < size; i++){
        if(min>arr[i])  
          min= arr[i];
    }
    printf("The smallest element is: %d", min);
}