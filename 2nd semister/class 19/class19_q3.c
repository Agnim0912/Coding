#include <stdio.h>

int main() 
{
    char a[50];
    printf("Enter a string : ");
    scanf("%[^\n]s", a);
    int i=0;
    while(a[i]!=' ')
    {
        i++;
    }
    int count=0;
    while(a[i+1+count]!=' ')
    {
        count++;
    }
    printf("The middle word is : ");
    for(int j=i; j<i+1+count; j++)
    {
        printf("%c", a[j]);
    }
    printf("\nThe length of the string is : %d characters.\n", count);
}