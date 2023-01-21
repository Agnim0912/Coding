#include <stdio.h>

int main()
{
    int i,j;

    char a[12]="ABC PQ RSTV";
    char b[12];
    for (i=2,j=0;i>=0;i--,j++)
        b[j]=a[i];
    b[j]=' ';
    for (i=5,j=4;i>3;i--,j++)
        b[j]=a[i];
    b[j]=' ';
    for (i=10,j=7;i>=7;i--,j++)
        b[j]=a[i];
    b[j]='\0';
    for (j=0;j<11;j++)
        printf("%c",b[j]);
        

    return 0;
}