# include<stdio.h>
int main() {
	float n;
	printf("enter n: ");
	scanf("%f",&n);
	float a=1;
	float sum=0;
	while (1)
	{
		float b=a+2;
		float c=(a/b);
		sum=sum+c;
		a=a+4;
		if (a<n)
			break;
	}
	printf("%f",sum);
}
