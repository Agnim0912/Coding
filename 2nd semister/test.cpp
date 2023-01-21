#include<stdlib.h>
#include<stdio.h>

void swap(int * a, int * b, int * s) 
{
    int temp = * a;
    * a = * b;
    * b = temp; ( * s) ++;
}

void selection_sort(int A[], int n) 
{ 
    int comp = 0, swaps = 0;
    for (int i = 0; i < n; i++) 
    { 
        int k;
        for (int j = k = i; j < n; j++) 
        { 
            if (A[j] < A[k]) 
            {
                k = j;
            }
            comp++;
        }
        swap( & A[i], & A[k], & swaps);
    }
    printf("The total number of possible comparisions are : %d\n", comp);
    printf("The total number of swaps are : %d\n", swaps);
}
int main() 
{
    int A[] = {1,2,3,4,5,6,7,8};		
    int size_1 =sizeof(A) /	sizeof(A[0]);
    int B[] = {1,2,3,4,5,8,7,9,6};		
    int size_2 =sizeof(B) /	sizeof(A[0]);
    int C[] = {2,1,4,3,6,5,7,8};		
    int size_3 =sizeof(C) /	sizeof(A[0]);
    printf("CASE	- 01: \n");	
    selection_sort(A, size_1);
    for (int i = 0; i < size_1; i++) 
    {
        printf("%d\t", A[i]);
    }
    printf("\n"); 
    selection_sort(A, size_1);
    for (int i = size_1 - 1; i >= 0; i--) 
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
    printf("CASE - 02: \n"); 
    selection_sort(B, size_2);
    
    for (int i = 0; i < size_2; i++) 
    {
        printf("%d\t", B[i]);
    }
    printf("\n"); 
    selection_sort(B, size_2);
    for (int i = size_2 - 1; i >= 0; i--) 
    {
        printf("%d\t", B[i]);
    }
    printf("\n");
    printf("CASE - 03: \n"); 
    selection_sort(C, size_3);
    for (int i = 0; i < size_3; i++) 
    {
        printf("%d\t", C[i]);
    }
    printf("\n"); 
    selection_sort(C, size_3);
    for (int i = size_3 - 1; i >= 0; i--) 
    {
        printf("%d\t", C[i]);
    }
    return 0;
}
