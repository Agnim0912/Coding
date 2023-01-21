#include <stdio.h>
#define n 4
 
void change(int arr[][n])
{
    for (int i = 0; i < n; i++) 
	{
		for(int j=0; j<n/2; j++)
		{
			int t = arr[i][j];
			arr[i][j] = arr[i][n - j-1];
			arr[i][n-j-1] = t;
		}
    }
}
 
int main()
{
    int arr[n][n] = { { 34, 58, 21, 54 },
                    { 47, 97, 34, 25 },
                    { 35, 22, 14, 86 },
                    { 15, 23, 43, 71 } };
 
    change(arr);
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}