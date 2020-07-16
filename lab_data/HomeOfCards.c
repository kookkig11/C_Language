#include <stdio.h>
int main(){
	char player[3][3], maxCard;
	int i, j; //i = player, j = card
	scanf("%s", player[0]);
	scanf("%s", player[1]);
	scanf("%s", player[2]);
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (player[i][j] > maxCard){
				maxCard = player[i][j];
			}
		}
	}	
	for (int i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (player[i][j] == maxCard){
				printf("%d ", i+1);
				break;
			}
		}
	}
}