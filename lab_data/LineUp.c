#include <stdio.h>
int main(){
	int n, i, countH = 0, countT = 0;
	char x;
	scanf("%d", &n);
	if ((n >= 1)&&(n <= 20)){
		for (i = 1; i < n; i++){
			scanf("\n%c", &x);
			if (x == 'h')
				countH+=1;
			else if (x == 't')
				countT+=1;
		}
	}
	
	if (countH == countT){
		printf("1");
	}
	else{
		if (countH == 0){
			if (countT%2 == 1){
				printf("%d", countT);
			}
			else if (countT%2 == 0){
				printf("%d", countT);
			}
		}

		else if (countT == 0){
			if (countH%2 == 1)
				printf("%d", countH+1);
			else if (countH%2 == 0)
				printf("%d", countH+1);
		}

		else if ((countH%2 == 1)&&(countT%2 == 1)){ //h=odd t=odd
			if (countH < countT)
				printf("%d", countT-countH);
			else if (countH > countT)
				printf("%d", countH-countT+1);
		}
		else if ((countH%2 == 1)&&(countT%2 == 0)){ //h=odd t=even
			if (countH < countT)
				printf("%d", countT-countH);
			else if (countH > countT)
				printf("%d", countH-countT+1);
		}
		else if ((countH%2 == 0)&&(countT%2 == 1)){ //h=even t=odd
			if (countH < countT)
				printf("%d", countT-countH);
			else if (countH > countT)
				printf("%d", countH-countT+1);
		}
		else if ((countH%2 == 0)&&(countT%2 == 0)){ //h=even t=even
			if (countH < countT)
				printf("%d", countT-countH);
			else if (countH > countT)
				printf("%d", countH-countT+1);
		}
}}