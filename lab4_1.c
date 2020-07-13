#include <stdio.h>
#include <math.h>
int main(){
	int n, num, binary = 0, i, x;
	scanf("%d", &n);
	num = n;
	while (n > 0) {
		for (i = 0; i < 4; i++) {
			x = n%2;
			n /= 2;
			binary += (x*pow(10,i));
		}
	}
	printf("Binary number of %d is %04d.", num, binary);
}