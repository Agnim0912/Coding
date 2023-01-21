#include <stdio.h>
int main() {
	int num, count = 0;
	scanf("%d", &num);
    int num_t = num;
	while (num != 0) {
		num /= 10;
		count = count + 1;
	}
	printf("Number of digits: %d\n", count);
	for(int i = 0; i<count/2; i++){
        num_t /= 10;
    }
    printf("Middle digit = %d\n",num_t%10);

	return 0;
}