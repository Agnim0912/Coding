#include <stdio.h>
#include <stdlib.h>
void print_array(int a[], int s, int l);

int main()
{
    int n,*a,i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a=(int *)malloc(n*sizeof(int));
    printf("Enter array:\n");
    for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
     printf("\nThe array: ");
    print_array(a,0,n);
    return 0;
}

void print_array(int a[], int s, int l)
{
    if(s >= l)
        return;
        
    printf("%d ", a[s]);
    print_array(a, s + 1, l); 
}