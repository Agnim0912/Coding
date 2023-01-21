#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter %d elements of square matrix: ", n*n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int p;
            scanf("%d", &p);
            arr[i][j]=p;
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]!=0)
            {
                cnt++;
            }
        }
    }
    printf("Number of non zero elements in array are %d \n", cnt);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i][i];
    }
    printf("Sum of leading diagonal elements are %d \n", sum);
    int temp=n-1;
    printf("Minor diagonal elements are: ");
    for(int i=0; i<n; i++)
    {
        int p;
        p=arr[i][temp];
        printf("%d, ", p);
        temp--;
    }
    int product=1;
    for(int i=0; i<n; i++)
    {
        product *= arr[i][i];
    }
    printf("\nProduct of diagonal elements are: %d \n", product);
}