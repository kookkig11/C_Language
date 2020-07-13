#include <stdio.h>
int main() {
	int x, y;
	printf("Enter the x coordinate: ");
	scanf("%d", &x);
	printf("Enter the y coordinate: ");
	scanf("%d", &y);
	if (y == 0) {
		if (x == 0) {
			printf("Center");
		}
		else if (x < 0) {
			printf("West");
		}
		else if (x > 0) {
			printf("East");
		}
	}
	else if (y < 0) {
		printf("South");
		if (x == 0) {
		}
		else if (x < 0) {
			printf("-west");
		}
		else if (x > 0) {
			printf("-east");
		}
	}
	else if (y > 0) {
		printf("North");
		if (x == 0) {
		}
		else if (x < 0) {
			printf("-west");
		}
		else if (x > 0) {
			printf("-east");
		}
	}
}