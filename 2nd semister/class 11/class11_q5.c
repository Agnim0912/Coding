#include <stdio.h>

int main() 
{
	float n;
	printf("enter n: ");
	scanf("%f",&n);
	float b=3, a;
	float sum=0;
	for (;b<=n;b+=4)
	{
		a=b-2;
		float val;
		val = a/b;
		sum += val;
        //printf("%f\n", val);
    }
	printf("%f",sum);
}
