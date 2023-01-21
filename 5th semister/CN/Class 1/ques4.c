#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int total = 0;
    int i;
    char *value;
    for(i = 1; i < argc; i++)
    {
        value = argv[i];
        printf("Value number %d: %s in ascii: %d\n", i, value, *value);
        total += atoi(value);
    }
    printf("Total of given integers is %d\n", total);
}