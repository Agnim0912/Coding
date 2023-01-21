#include <stdio.h>

int main() {
    int m=3, n=4, count=1;
    int arr[m][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            arr[j][i] = count++;
        }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}