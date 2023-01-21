#include <stdio.h>
#include <stdlib.h> 

int Merge(int A[],int l,int mid,int h)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int B[(mid+1-l)+(h+1-(mid+1))];
    while(i<=mid && j<=h)
    {
        if(A[i]<=A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=h)
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            B[k]=A[i];
            i++;
            k++;
        }
    }
    for(k=l;k<=h;k++)
    {
        A[k]=B[k];
    }

}


void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void selectionSort(int arr[],int m, int n) 
{ 
    int i, j, min_idx; 
  
    for (i = m; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        swap(&arr[min_idx], &arr[i]); 
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
    int mid=(0+(n-1))/2;
    selectionSort(A,0,mid);
    selectionSort(A,mid+1,(n-1));
    Merge(A,0,mid,(n-1));
    printArray(A,n);
}