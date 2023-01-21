#include <stdio.h>

int main() {
	int m; 
	printf("Enter M: "); 
	scanf("%d", &m);
	int n; 
	printf("Enter N: "); 
	scanf("%d", &n);
	int num = 2;
	if (m >= n) {
		printf("%d ", m);
		m = m-num;
		num= num+2;
	}
	else if (n>=m)
	{
		printf("%d ", m);
		n = n-num;
		num= num+2;
	}
}
