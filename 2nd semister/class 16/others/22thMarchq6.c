#include <stdio.h>
int main() {
    int arr[4][4], count = 1;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(i==j) {
                arr[i][j] = count++;
            } else {
                arr[i][j] = 0;
            }
        }
    }
    for(int i=3; i>=0; i--) {
        for(int j=3; j>=0; j--) {
            if(i==j+1) {
                arr[i][j] = count++;
            }
        }
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(i==j+2) {
                arr[i][j] = count++;
            }
        }
    }
    arr[3][0] = count++;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}