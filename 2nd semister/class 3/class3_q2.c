#include <stdio.h>

int main()
{
    char i[] ={'A','D','2','\n','\\','\r','\v','a'};
    int a;
    for (a=0; a<8; a++)
    {
        printf("ASCII value of character %c = %d\n", i[a], i[a]);
    }
}
