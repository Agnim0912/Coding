//bubble sort

#include<stdio.h>
void printarray(int arr[],int n)
{
	int i;
	printf("the sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
			 	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	int ar[n];
	printf("enter the elements:");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	bubblesort(ar,n);
	printarray(ar,n);
	return 0;
}