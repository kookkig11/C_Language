#include <stdio.h>
int main(){
	int i, n, m;
	char country[5][10] = {"U.S.A.", "Japan", "Thailand", "India", "S.Korea"};
	int money[5] = {1000, 5000, 7500, 10000, 15000};

	printf("Choose a number of country you choose to friend\n");
	for (i = 0; i < 5; i++) {
		printf("%d. %s\n", i+1, country[i]);
	}
	printf(": ");
	scanf("%d", &n);
	if (n < 1 || n > 5) {
		printf("\nyour country is: Unknown\nHe's lazy now, He don't want to go anymore.");
	}
	else {
		printf("\nyour country is: %s\nChoose a number of money you want to take it to him\n", country[n-1]);
		for (i = 0; i < 5; i++) {
			printf("%d. %d\n", i+1, money[i]);
		}
		printf(": ");
		scanf("%d", &m);
		if (m == 1 || m == 2) {
			printf("%d not enough,he can't travel with lowcost.\nHe's lazy now, He don't want to go anymore.", money[m-1]);
		}
		else if (m == 3 || m == 4 || m == 5) {
			printf("%d that enough,he can travel now.\nGoodluck,my friend.", money[m-1]);
		}
	}
}