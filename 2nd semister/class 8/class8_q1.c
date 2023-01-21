#include <stdio.h>
int main() {
	int ta;
	scanf("%d", &ta);
	if (ta >= 5000) {
		printf("Discount of 30%\n");
		int discount = (30 * ta) / 100;
		int balance = (ta - discount);
		printf("Amount Deduced: %d\n", discount);
		printf("Amount To be paid: %d\n", balance);
	}
	else if (ta >= 3000) {
		printf("Discount of 20%\n");
		int discount = (20 * ta) / 100;
		int balance = (ta - discount);
		printf("Amount Deduced: %d\n", discount);
		printf("Amount To be paid: %d\n", balance);

	}
	else if (ta >= 1000) {
		printf("Discount of 10%\n");
		int discount = (10 * ta) / 100;
		int balance = (ta - discount);
		printf("Amount Deduced: %d\n", discount);
		printf("Amount To be paid: %d\n", balance);
	}
	else {
		printf("No Discount Available");
		printf("Amount To be paid: %d\n", ta);
	}

	return 0;
}