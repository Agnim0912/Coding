#include <stdio.h>

int main() {
    int arr[3][4], count=1;
    for(int i=0; i<4; i++) {
        for(int j=0; j<3; j++) {
            arr[j][i] = count++;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int m=2, n=0;
    P:
        printf("%d ", arr[m--][n]);
    if(m>=0) goto P;
    m=0, n++;
    Q:
        printf("%d ", arr[m++][n]);
    if(m<3) goto Q;
    m=2, n++;
    R:
        printf("%d ", arr[m--][n]);
    if(m>=0) goto R;
    m=0, n++;
    S:
        printf("%d ", arr[m++][n]);
    if(m<3) goto S;
    return 0;
}