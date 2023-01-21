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

int Mergesort(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        Mergesort(A,l,mid);
        Mergesort(A,mid+1,h);
        Merge(A,l,mid,h);
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
    Mergesort(A,0,n-1);
    printArray(A,n);
}