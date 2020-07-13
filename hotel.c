#include <stdio.h>
int main() {
	int guest, have, kid, money, price, change;
	printf("Welcome to the Hotel\n");
	printf("> Enter number of guests: ");
	scanf("%d", &guest);
	if (guest <= 0) {
		printf("Sorry, Guest must be greater or equal to 1");
	}
	else {
		printf("You can choose a room size: ");
		if (guest == 1) {
			printf("S\n");
			price = 500;
		}
		else if (guest == 2) {
			printf("M\n");
			price = 800;
		}
		else if (guest > 2 && guest <= 4) {
			printf("L\n");
			price = 1500;
		}
		else {
			printf("XL and Family\n");
			printf("> Do you have kids? (y/n): ");
			scanf("%s", &have);
			if (have == 'y' || have == 'Y') {
				printf("> Enter number of kids: ");
				scanf("%d, &kid");
				if (kid <= 2) {
					printf("You can choose a room size: XL\n");
					price = 1750;
				}
				else if (kid > 2) {
					printf("You can choose a room size: Family\n");
					price = 2000 + (50*(kid/2));
				}
			}
			else if (have == 'n' || have == 'N') {
				printf("You can choose a room size: XL\n");
				price = 1700;
			}
		}
		printf("You have to pay %d baht\n", price);
		printf("> Enter your money: ");
		scanf("%d", &money);
		change = money - price;
		printf("Your change %d baht", change);
	}
}