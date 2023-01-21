#include <stdio.h>

int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], sum[n][n];
    printf("Enter matrix 1 : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter matrix 2 : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Array 1 + Array 2 : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}