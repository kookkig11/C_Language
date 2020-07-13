#include <stdio.h>
#include <math.h>
float main() {
	int size, pepper, cheese, mushroom, dm;
	float area, extra, cost, price;
	printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	printf("Enter pizza size (1=s, 2=m, or 3=l): ");
	scanf("%d", &size);
	printf("Extra pepperoni? (1=yes, 0=no): ");
	scanf("%d", &pepper);
	printf("Extra cheese? (1=yes, 0=no): ");
	scanf("%d", &cheese);
	printf("Extra mushroom? (1=yes, 0=no): ");
	scanf("%d", &mushroom);
	
	if (size == 1) {
		dm = 10;
	}
	else if (size == 2) {
		dm = 16;
	}
	else if (size == 3) {
		dm = 20;
	}
	area = M_PI * (dm * dm) /4;

	extra = 0;
	if (pepper == 1) {
		extra += 0.5;
	}
	else if (cheese == 1) {
		extra += 0.25;
	}
	else if (mushroom == 1) {
		extra += 0.3;
	}

	cost = 5 + (2 * area) + (extra * area);
	price = cost * 1.5;

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Your order costs %.2f baht.\n", price);
	printf("Thank you.");
}