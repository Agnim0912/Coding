#include <stdio.h>


int main()
{
    int n, n1, n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if (n2>n1)
    {
        int temp;
        temp = n2;
        n2 = n1;
        n1 = temp;
        
    }
    else{
        break;
    }
    int num = 2;
    while (n2-1<n1)
    {
        printf("%d\n", n1);
        n1=25-num;
        num = num -2;
    }
}