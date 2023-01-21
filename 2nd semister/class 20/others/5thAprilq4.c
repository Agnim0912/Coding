#include <stdio.h>

int main() {
    int a = 500, b = 300, c;
    int *p = &a;
    int *q = &b;
    c = *p;
    *p = *q;
    *q = c;
    printf("a = %d, b = %d \n", a, b);
    return 0;
}