# include<stdio.h>
int main() {
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a,b,c;
	a=1;
	b=1;
	printf("%d %d \t",1,1);
	while (1)
		{c=a+b;
		
		printf("%d \t",c);
		if (c>n)
			break;
		a=b;
		b=c;}
		}
		
