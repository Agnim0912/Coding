
#include <stdio.h>

int main()
{
    int i,j,h;
    char a[10];
    char b[10];
    printf("Enter your elements");
    
    scanf("%[^\n]s",a);
    
    for (j=9,i=0;j>=0;j--,i++)
        b[j]=a[i];
    for (int h=0;h<10;h++)
        printf("%c",b[h]);
       
        
        
    

    return 0;
}

