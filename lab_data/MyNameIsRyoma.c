#include <stdio.h>
int main(){
	char angle;
	int n, i, j;
	scanf("%c %d", &angle, &n);
	if ((n >= 1)&&(n <= 9)){
		if (angle == 'l'){
			for(i = 0; i < n; i++){
				for (j = 0; j < i; j++)
					printf(" ");
				printf("*\n");
			}
			for (i = 0; i < n; i++)
				printf(" ");
			printf("#");
		}
		else if (angle == 'r'){
			for(i = 0; i < n; i++){
				for (j = 0; j < n-i; j++)
					printf(" ");
				printf("*\n");
			}
			printf("#");
		}
}}