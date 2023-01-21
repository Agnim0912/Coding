#include <stdio.h>

int main()
{
    int inp,x=1,val;
    printf("Enter a positive value: ");
    scanf("%d",&inp);
    printf("\nDesired series is as follows\n\n");
    val=inp;
    for(;x<=val;)
    {
        printf("%d\n",x);
        printf("%d\n",val);
        x++;
        val--;
    }
    printf("\n");
}
