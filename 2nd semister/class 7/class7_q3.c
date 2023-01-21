#include <stdio.h>

int smallest_2(int n1, int n2) {
	if (n1 < n2) {return n1;}
	else 
    {
        return n2;
    }
}


int largest_2(int n1, int n2) {
	if (n2 > n1) {return n2;}
	else 
    {
        return n1;
    }
}


int main() {
	int n1, n2, n3, temp;
	scanf("%d", &n1); 
    scanf("%d", &n2); 
    scanf("%d", &n3);

	int temp2 = smallest_2(n1, n2);
	int smallest; int largest;

	if (temp2 < n3) {
        smallest = temp2;
        }
	else {
        smallest = n3;
        }
	printf("Minimum : %d\n", smallest);
	int temp3 = largest_2(n1, n2);
	if (n3 > temp3) {
        largest = n3;
        }
	else {
        largest = temp3;
        }
	int second_largest = (n1 + n2 + n3) - (smallest + largest);
	printf("2nd Minimum : %d\n", second_largest);

	return 0;
}