#include <stdio.h>

int main()
{
    char arr[20];
    char *p=&arr[0];
    printf("Enter string 1: ");
    scanf("%s",arr);
    printf("Enter string 2: ");
    scanf("%s",arr+5);
    printf("Enter string 3: ");
    scanf("%s",arr+10);
    printf("Enter string 4: ");
    scanf("%s",arr+15);
    printf("\nString: ");
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c ",arr[i]);
    }
    for(int i=5;arr[i]!='\0';i++)
    {
        printf("%c ",arr[i]);
    }
    for(int i=10;arr[i]!='\0';i++)
    {
        printf("%c ",arr[i]);
    }
    for(int i=15;arr[i]!='\0';i++)
    {
        printf("%c ",arr[i]);
    }
}