#include <stdio.h>

int function(int n, int m, char oprator) {
	if (oprator == '+') 
	{
		int ans = n + m;
		return ans;
	}
	else if (oprator == '-') 
	{
		int ans = n - m;
		return ans;
	}
	else if (oprator == '*') 
	{
		int ans = n * m;
		return ans;
	}
	else if (oprator == '/') 
	{
		int ans = n / m;
		return ans;
	}
}
int main() 
{
	int n; scanf("%d", &n);
	int m; scanf("%d", &m);
	getchar();
	char oprator; scanf("%c", &oprator);
	int final = function(n, m, oprator);
	printf("%d", final);
	return 0;
}