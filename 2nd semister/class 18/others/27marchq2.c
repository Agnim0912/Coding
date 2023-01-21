#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("r1 c1 : ");
    scanf("%d %d", &r1, &c1);
    printf("r2 c2 : ");
    scanf("%d %d", &r2, &c2);
    if(c1==r2) {
        int arr1[r1][c1], arr2[r2][c2], res[r1][c2];
        printf("Enter matrix 1 : \n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c1; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter matrix 2 : \n");
        for(int i=0; i<r2; i++) {
            for(int j=0; j<c2; j++) {
                scanf("%d", &arr2[i][j]);
            }
        }
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                res[i][j] = 0;
                for(int k=0; k<c1; k++) {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("matrix 1 * matrix 2 : \n");
        for(int i=0; i<r1; i++) {
            for(int j=0; j<c2; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Cannot multiply. No of columns of matrix 1 is not equal to No of rows of matrix 2\n");
    }
    return 0;
}