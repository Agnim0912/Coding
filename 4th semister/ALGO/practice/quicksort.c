#include <stdio.h>
#include <stdlib.h> 

int partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l, j=h;
    while(i<j)
    {
        while(A[i]<pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp =A[i];
            A[i]=A[j];
            A[j]= temp;
        }
    }
    int temp=A[l];
    A[l]=A[j];
    A[j]=temp;
    return j;
}

int Quicksort(int A[],int l,int h)
{
    if(l<h)
    {
        int j=partition(A,l,h);
        Quicksort(A,l,j-1);
        Quicksort(A,j+1,h);
    }
}

void printArray(int a[], int n){   
    for (int i = 0; i < n; i++)  
        printf("%d ", a[i]); 
}

int main()
{
    int n,t,A[10];
    printf("Enter number of elements: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        scanf("%d",&t);
        A[i]=t;
    }
    Quicksort(A,0,n-1);
    printArray(A,n);
}