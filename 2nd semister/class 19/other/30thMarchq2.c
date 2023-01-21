#include <stdio.h>

int main()
{
    char a[100];
    printf("Enter your characters :");
    scanf("%[^\n]s",a);
    int i;
    
    for (i=0;a[i]!='\0';i++)
        i=i+1;
    printf("The length of the string is %d",i);

    return 0;
}

