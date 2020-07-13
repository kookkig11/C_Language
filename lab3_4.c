#include <stdio.h>
int main(){
	int a, b, max, i, gcd;
	scanf("%d/%d", &a, &b);
	
	if (a%b == 0) {
		printf("= %d", a/b);
	}
	else {
		//gcd
		if (a > b)
			max = a;
		else
			max = b;
		for (i = 1; i <= max; i+=1) {
			if (a%i == 0 && b%i == 0) {
				gcd = 1;
				gcd *= i;
			}
		}
		printf("= %d/%d", a/gcd, b/gcd);
	}
}