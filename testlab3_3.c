#include <stdio.h>

int main ()
{
	int m, n, max, gcd;
	long lcm;
	scanf("%d %d", &m, &n);

	if (m > n)
		max = m;
	else
		max = n;

	int i = 1;
	while (i <= max) {
		if (m%i == 0 && n%i == 0) {
 			gcd = i;
  		}
		i+=1;
 	}
 	lcm = (m/gcd);
 	lcm *= n;
 	printf("GCD: %d\nLCM: %ld", gcd, lcm);
 	return 0;
}