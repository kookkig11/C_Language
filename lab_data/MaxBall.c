#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int splitBall(char input[], int start, int end){
	int ball = strlen(input);
	char temp[end-start+1];
	for (int i = 0; i < strlen(temp); i++){
		temp[i] = ' ';
	}

	int count = 0;
	for (int j = start; j < end+1; j++){
		temp[count] = input[j];
		count++;
	}
	return atoi(temp); //array to int
} 


int main(){
	int i, n, max, x;
	char ball_line[20];
	//input
	scanf("%s", ball_line);
	scanf("%d", &n);
	//many ball
	int countBall = strlen(ball_line);

	if ((n > countBall) || (n <= 0)){
		printf("ERROR");
	}
	else if (n < countBall){
		max = 0;
		for (i = 0; i < n; i++){
			x = splitBall(ball_line, n-i-1, countBall-i-1);
			if (x > max){
				max = x;
			}
		}
		printf("%d", max);
	}
	else{
		max = 0;
		for (i = 0; i < countBall; i++){
			if (ball_line[i] - '0' > max){
				max = ball_line[i] - '0';
			}
		}
		printf("%d", max);
	}
	return 0;
}