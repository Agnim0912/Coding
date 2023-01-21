#include <stdio.h>

int main()
{   int counteven=0;
    int countodd=0;
    int sumeven=0;
    int sumodd=0;
    int i,j;
    int a[3][4]={
                    {2,9,3,6},
                    {0,4,1,1},
                    {7,3,4,5}};
    for (i=0;i<3;i++)
       { for (j=0;j<4;j++)
           { if (a[i][j]%2==0)
               { counteven=counteven+1;
                sumeven=sumeven+a[i][j];}
            else 
               { countodd=countodd+1;
                sumodd=sumodd+a[i][j];}}}
    printf("%d %d  %d %d",counteven,countodd,sumeven,sumodd);
    return 0;
}
    
