#include <stdio.h>

int main() 
{
    int i, j, N = 6;
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= N; j++) 
        {
            if (i == 1 || i == N || j == 1 || j == N ||  j == (N - i + 1)) 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}