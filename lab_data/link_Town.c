#include <stdio.h>
int main()
{
	int i;
	int numTown, numRoad, stratR, endR, stratT, endT, can=0;
	scanf("%d %d", &numTown, &numRoad);
	int check[numRoad][2];

	//edge of road to town
	for (i = 0; i < numRoad; i++){
		scanf("%d %d", &stratR, &endR); //R=Road
		check[i][0] = stratR;
		check[i][1] = endR;
	}
	//check townS to townE?
	scanf("%d %d", &stratT, &endT);	//T=Town
	int tmp=stratT, x=0;

	//loop check
	for (i = 0; i < numRoad; i++){
		if (tmp==check[i][0]){
			if (endT==check[i][1]){
        		can = 1; //TRUE
        		break;
			}
			else{
				tmp = check[i][1];
				check[i][0] = 0;
				check[i][1] = 0;
				i = 0;
				continue;
			}
		}
		else if (tmp==check[i][1]){
			if (endT==check[i][0]){
        		can = 1; //TRUE
        		break;
			}
			else{
				tmp = check[i][0];
				check[i][0] = 0;
				check[i][1] = 0;
				i = 0;
				continue;
			}
		}

		if (i==numRoad-1 && x<=numRoad*2){
			x++;
			tmp = stratT;
			i = 0;
		}
	}

	if (can==1){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}