#include <stdio.h>

int main() {
    int slices=20;
    int *p=&slices;
    printf("%d\n", &slices); 
    printf("%p\n", p);
}