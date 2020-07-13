#include <stdio.h>
int main(){
	int i, j = 0, x[5];
	for (i = 0; i < 5; i++) {
		printf("> Enter number %d :", i+1);
		scanf("%d", &x[i]);
	}
	if (x[j]%10 == 0) {
		printf("%d,", x[j]);
		j++;
	}

}