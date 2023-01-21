#include <stdio.h>
int main() {
	int t1; 
    scanf("%d", &t1);
	int t2;
    scanf("%d", &t2);
	if (t1>t2){
		printf("%d is the earliest one", t2);
	}
	else if (t1<t2){
		printf("%d is the earliest one", t1);
	}
	return 0;
}