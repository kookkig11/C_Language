#include <stdio.h>
int main(){
	int n, i, j;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n+(n-1); i++) {
		if (i <= n) { // up
			for (j = 1; j <= i; j++) {
				if (j%2 == 0) {
					if (j == i) {
						printf("x\n");
					}
					else {
						printf("x");
					}
				}
				else {
					if (j == i) {
						printf("-\n");
					}
					else {
						printf("-");
					}
				}
			}
		}
		else {
			for (j = 1; j <= 2*n-i; j++) {
				if (j%2 == 0) {
					if (j == 2*n-i) {
						printf("x\n");
					}
					else {
						printf("x");
					}
				}
				else {
					if (j == 2*n-i) {
						printf("-\n");
					}
					else {
						printf("-");
					}
				}
			}
		}
	}
}