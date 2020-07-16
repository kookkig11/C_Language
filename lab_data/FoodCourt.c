#include <stdio.h>
int main(){
	int i, T, n, m; //T=TestCase, n=NumOfStore, m=ManyQuestion
	scanf("%d", &T);

	//Loop Test Case
	for (int k = 0; k < T; k++){
		scanf("%d %d", &n, &m);
		int price[n];
		int x[m]; //x=YourMoney

		//Loop Price of Store
		for (i = 0; i < n; i++){
			scanf(" %d", &price[i]);
		}
		//Loop Question
		for (i = 0; i < m; i++){
			scanf("%d", &x[i]);
		}

		//Check num that you can buy & (can't buy: store - can buy)
		for (i = 0; i < m; i++){
			int canBuy = 0;
			for (int j = 0; j < n; j++){
				if (x[i]/price[j] > 0){
					canBuy+=1;
				}
			}
			printf("%d %d\n", canBuy, n-canBuy);
		}
	}
	return 0;
}