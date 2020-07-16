#include <stdio.h>

typedef struct factor{
	int canSplit[8]; //2 3 4 5 6 7 8 9
} Factor;

void main(){
	Factor factor;
	int num, count;
	scanf("%d", &num); // 1<num<=100
	int canSplit[49]; //2 3 4 ... 50
	
	int s = 0;
	for (int i = 2; i <= num/2; i++){
		if (num%i == 0){
			canSplit[s] = i;
			s++;
		}
	}

}