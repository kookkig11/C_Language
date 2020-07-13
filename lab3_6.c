#include <stdio.h>
int main(){
	int n, j = 1;;
	scanf("%d", &n);
	if (n < 1 || n > 26) {
	  printf("-");
	}
	else {
		for (int i = 0; i < n+(n-1); i+=1) {
			if (n+(n-1) - i == 1) {
				if (n == 1) {
					printf("%c", 97);
				}
				else {
		 			printf("%c", 97+j);
				}
		  	}
		  	else {
		  		if (i >= n) {
		  			printf("%c-", 97+j);
		  			j+=1;
		  		}
		  		else{
		  			printf("%c-", 97+n-i-1);
		  		}
		  	}
		}
	}
}