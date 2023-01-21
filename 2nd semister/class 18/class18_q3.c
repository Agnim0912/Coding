#include <stdio.h>

int main() {
    int n=10;
    P: 
    printf("%d ", n--);
    if(n>0) {
        goto P;
    }
    printf("\n");
    int m=2, i=0;
    Q:
        m += (i++)*2;
        printf("%d ", m);

    if(i<10) {
        goto Q;
    }
    return 0;
}