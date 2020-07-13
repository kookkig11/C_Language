#include <stdio.h>
int main() {
	float income, tax1, tax2, money1, money2, paid;
	scanf("%f", &income);
	if (income < 0) {
		printf("Error: Salary must be greater or equal to 0");
	}
	else {
		tax1 = 0.05;
		if (income <= 300000) {
			money1 = income;
			tax2 = 0;
			money2 = 0;
		}
		else {
			money1 = 300000;
			tax2 = 0.10;
			money2 = income - 300000;
		}
		//split income = 300000 & money2
		paid = (money1*tax1) + (money2*tax2);
		printf("%.2f", paid);
	}
}