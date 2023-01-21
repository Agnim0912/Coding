#include <stdio.h>

int main() 
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	int a,b,c;
	a=1;
	b=1;
	printf("%d %d ",1,1);
	while (1)
	{
        c=a+b;
		printf("%d ",c);
		if (c>n)
        {
			break;
        }
        a=b;
		b=c;
    }
}