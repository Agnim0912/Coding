#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Alphabet= %c ", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Number= %c", ch);
    }
    else 
    {
        printf("Special character= %c", ch);
    }
}