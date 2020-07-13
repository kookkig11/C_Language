#include <stdio.h>
int main() {
	int st, discount, left, now;
	float money, amount;

	scanf("%d", &st);
	scanf("%f", &money);

	if (st == 0) {
		discount = 0;
		left = 0;
	}
	else if (st == 1) {
		discount = 10;
		left = 1;
	}
	else if (st == 2) {
		discount = 15;
		left = 2;
	}
	else if (st >=3 && st < 6) {
		discount = 20;
		left = 3;
	}
	else if (st >=6 && st < 9) {
		discount = 30;
		left = 6;
	}
	else {
		discount = 40;
		left = 9;
	}
	printf("You get %d percents discount.\n", discount);

	amount = money * (100-discount)/100;
	printf("Total amount due is %.2f Baht.\n", amount);

	now = st - left;
	printf("And you have %d stickers left.", now);
}