#include <stdio.h>

int main()
{
    char a[100];
    int i,j;
    int count=0;
    printf("Enter  words :");
    scanf("%[^\n]s",a);
    for (int i=0;a[i]!='\0';i++)
    {
        count=count+1;
    }
    printf(" The length of the words %d",count);
    return 0;
}        
