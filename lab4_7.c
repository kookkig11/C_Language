#include <stdio.h>
int main(){
	int i = 1;
	float goal, collect, total = 0;
	printf("Enter your goal amount: ");
	scanf("%f", &goal);
	while (goal > 0) {
		printf("Enter money collected today: ");
		scanf("%f", &collect);
		goal -= collect;
		total += collect;

		if (goal <= 0) {
			if (i == 1) {
				printf("Congratulations! You take %d day to reach your goal.", i);
			}
			else if (i > 1) {
				printf("Congratulations! You take %d days to reach your goal.", i);
			}
		}
		else printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", i, total, goal);
		i++;
	}
}