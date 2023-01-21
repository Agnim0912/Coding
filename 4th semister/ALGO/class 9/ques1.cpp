#include <stdio.h> 
 

#define max(x, y)(((x) > (y)) ? (x) : (y)) 
 

#define min(x, y)(((x) < (y)) ? (x) : (y)) 



int findPlatform(int arr[], int dep[], int n)
{


    int plat_needed = 1, result = 1;

    int i = 1, j = 0;



    for (int i = 0; i < n; i++) {
        plat_needed = 1;
        for (int j = i + 1; j < n; j++) {


            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) ||

           (arr[j] >= arr[i] && arr[j] <= dep[i]))

                plat_needed++;

        }
        result = max(result, plat_needed);
    }
    return result;
}

  
// Driver Code

int main()
{

    int arr[] = { 830, 920, 850, 912, 1000, 1600 };

    int dep[] = { 910, 1000, 1150, 917, 1800, 2200 };

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum Number of Platforms Required = %d", findPlatform(arr, dep, n));

    return 0;
}