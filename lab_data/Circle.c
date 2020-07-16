#include <stdio.h>
int main(){
	int n, m; //n=kid, m=holdHand
	scanf("%d %d", &n, &m);
	int hand[n];
	int check = 0;

	//make array of circle
	for (int i = 0; i < n; i++){
		hand[i] = i+1;
	}

	//loop check circle
	int kid1, kid2, kid3;
	int tmp2, tmp3;
	for (int j = 0; j < m; j++){
		scanf("%d %d %d", &kid1, &kid2, &kid3);
		for (int k = 0; k < n; k++){
			if (hand[k] == kid1){
				if (k == n-1){
					if (kid2 != hand[k+1-n]){
						//tmp2 = kid[k+1-n];
						hand[k+1-n] = kid2;
						if (kid3 != hand[k+2-n]){
							hand[k+2-n] = kid3;
							break;
						}
					}
					else{
						if (kid3 != hand[k+2-n]){
							hand[k+2-n] = kid3;
							break;
						}
					}
				}
				else if (k < n-2){
					if (kid2 != hand[k+1]){
						//tmp2 = hand[k+1];
						hand[k+1] = kid2;
						if (kid3 != hand[k+2]){
							hand[k+2] = kid3;
							break;
						}	
					}
					else{
						if (kid3 != hand[k+2]){
							hand[k+2] = kid3;
							break;
						}	
					}
				}	
				else if (k == n-2){
					if (kid2 != hand[k+1]){
						//tmp2 = hand[k+1];
						hand[k+1] = kid2;
						if (kid3 != hand[k+1-(n-1)]){
							hand[k+1-(n-1)] = kid3;
							break;
						}	
					}
					else{
						if (kid3 != hand[k+1-(n-1)]){
							hand[k+1-(n-1)] = kid3;
							break;
						}
					}
				}
			}
		}
		//checkAns
		if (m == 1){
			if (kid1 == kid3){
				check = 1;
			}
			else{
				check = 0;
			}
		}
		else{
			if (j == m-1){
				
			}
		}
	}

	return 0;
}