#include <stdio.h>
int main(){
	int i, j;
	int numMember, numSent, sent, receive, spy=0;
	scanf("%d %d", &numMember, &numSent);
	int check[numSent][2]; //check sent,receive

	//input check
	for (i = 0; i < numSent; i++){
		scanf("%d %d", &sent, &receive);
		check[i][0] = sent;
		check[i][1] = receive;
	}
	//check spy
	for (i = 0; i < numSent; i++){
		int x = check[i][0];
		int y = check[i][1];

		if (x!=0 && y!=0){
			for (j = 0; j < numSent; j++){
				//check who recieve and sent back
				if (check[j][1]==x && check[j][0]==y && check[j][0]!=0 && check[j][1]!=0){
					check[j][0] = 0;
					check[j][1] = 0; //array check is int >> set 0 is done
					break;			
				}
				else{
					if (numSent-j == 1){
						spy = 1; //have spy
						break;
					}
				}
			}
			if (spy==1){
				break; //have spy >> stop loop
			}
		}
	}

	if (spy==1){
		printf("Yes");
	}
	else{
		printf("No");
	}

	return 0;
}