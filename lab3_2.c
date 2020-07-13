#include <stdio.h>
int main(){
	int n, i;
	scanf("%d", &n);
	if (n >= 0) {
		for (i = 0; n >= i; n-=1) {
			printf("%d\n", n);
		}
	}
}