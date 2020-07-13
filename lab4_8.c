#include <stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
			if (j == i) {
				printf("\n");
			}
		}
	}
	for (i = n+1; i <= 2*n-1; i++) {
		for (j = 1; j <= i-(2*(i-n)); j++) {
			printf("*");
			if (j == i-(2*(i-n))) {
				printf("\n");
			}
		}
	}
}