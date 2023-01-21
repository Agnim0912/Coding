#include <stdio.h>

int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int *p = a;
    int *q = a + n/2;
    for(int i=0; i<n/2; i++) {
        int temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q++;
    }
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}