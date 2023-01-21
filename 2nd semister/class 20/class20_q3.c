#include <stdio.h>

int main()
{
    int N;
    printf("Enter N :");
    scanf("%d",&N);
    int a[N],i,*p;
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);
    p = &a[N - 1]; 
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", *p--); 
    p = &a[0];
    for(i = 0; i < N; i++)  
        printf("%d\n", *p++);
}