#include <stdio.h>

int main(){
	int marioHP = 25, marioDM = 15, bossHP = 50, bossDM = 10;
	int i, hit;
	printf("<< Mario VS Turtle Boss >>\n");
	for (i = 1; i <= 5; i += 1) {
		int x1 = marioHP, x2 = marioHP, y2 = bossHP;
		int Bhp = i*y2;
		printf("<< Stage %d >>\n", i);
		printf("Turtle Boss : %d HP\n", Bhp);
		printf("Now you have %d DM & You will hit(time): ", marioDM);
		scanf("%d", &hit);
		Bhp -= marioDM*hit;
		x2 -= bossDM*hit;
		if (x2 <= 0) {
			printf("--- YOU LOSE! ---\n");
			break;
		}
		else {
			if (Bhp > 0) {
				if (x2 <= (0.5*x1)) {
					printf("..WOW! You found GOLD MUSHROOM\n");
					x2 = x1;
					x2 += 10;
					marioDM += 5;
					printf("Turtle Boss : %d HP\n", Bhp);
					printf("YOU : %d HP\n", x2);
					printf("Now you have %d DM & You will hit(time): ", marioDM);
					scanf("%d", &hit);
					Bhp -= marioDM*hit;
					x2 -= bossDM*hit;
					if (x2 <= 0) {
						printf("--- YOU LOSE! ---\n");
						break;
					}
					else {
						printf("--- YOU WIN! ---\n");
						x2 = x1;
						x2 += 10;
					}
				}
				else if (x2 > (0.5*x1)) {
					printf("Turtle Boss : %d HP\n", bossHP);
					printf("YOU : %d HP\n", x2);
					printf("Now you have %d DM & You will hit(time): ", marioDM);
					scanf("%d", &hit);
					bossHP -= marioDM*hit;
					x2 -= bossDM*hit;
					if (x2 <= 0) {
						printf("--- YOU LOSE! ---\n");
						break;
					}
					else {
						printf("--- YOU WIN! ---\n");
						x2 = x1;
					}
				}
			}
			else if (Bhp <= 0) {
				printf("--- YOU WIN! ---\n");
			}
		}
	}
}