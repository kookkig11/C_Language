#include <stdio.h>
int main(){
	long n, powNum, i, check = 0;
	printf("Input n = ");
	scanf("%ld", &n);
	powNum = n*n;
	printf("n^2 = %ld\n", powNum);
	for (i = 1; i < powNum; i*=10) {
		if (powNum%i == n) {
			printf("Yes. %ld is automorphic number.", n);
			check = 1;
			break;
		}
	}

	if (check == 0) {
		
			printf("No. %ld is not automorphic number.", n);
		
	}
}