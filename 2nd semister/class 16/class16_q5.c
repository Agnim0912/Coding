# include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Enter the 2D array : \n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The values displayed diagonally are : \n");

    for(int track=0; track<n+m; track ++) {
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i+j == track) {
                    printf("%d ", arr[j][i]);
                }
            }
        }
        printf("\n");
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}