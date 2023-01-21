#include <stdio.h>

int main() {
    char a[50];
    printf("Enter a string : ");
    scanf("%[^\n]s", a);
    printf("%s", a);
}