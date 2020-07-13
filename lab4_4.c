#include <stdio.h>

int main(){
	int x, y, i, j, h;
	scanf("%d", &x);
	scanf("%d", &y);
	for (i = 1; i <= y; i++) {
		if (i == 1) {
			for (j = 1; j <= x; j++) {
				printf("*");
				if (j == x) {
					printf("\n");
				}
			}
		}
		else if (i == y) {
			for (j = 1; j < x+y; j++) {
				if (j < y) {
					printf(" ");
				}
				else if (j == (x+y)) {
					printf("\n");
				}
				else {
					printf("*");
				}
			}
		}
		else if (i >= 2 && i < y) {
			for (j = 1; j < x+i; j++) {
				if (j < i) {
					printf(" ");
				}
				else if (j == i) {
					printf("*");
				}
				else if (j == x+i-1) {
					printf("*\n");
				}
				else {
					printf(" ");
				}
			}
		}
	}
}