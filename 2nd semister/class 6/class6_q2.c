#include <stdio.h>

int main()
{
    float f;
    int i;
    scanf("%f", &f);
    i = f * 1000;
    printf("%d\n",i);
    if (i % 10 > 4)
    {
        i /= 10;
        i++;
    }
    else 
        i/=10;
    f = i/100.0; 
    printf("%.2f\n",f);
}