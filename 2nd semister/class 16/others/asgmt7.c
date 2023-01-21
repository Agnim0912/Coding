#include<stdio.h>
int main()
{
	int i, j, arr[4][4], a = 1;
	for(i = 0; i < 4; i++)
	{
		if(i%2 == 0)
		{
			for(j = i; j < 4; j++)
			{
				arr[j][j - i] = a++;
			}
		}
		else
		{
			for(j = 3; j >= i; j--)
			{
				arr[j][j - i] = a++;
			}
		}
	}
	printf("Output Array:\n\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
