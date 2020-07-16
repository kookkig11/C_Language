#include <stdio.h>
int main(){
	int n, i, count = 0;
	char x, arr[26];
	scanf("%d", &n);
	//make all array = 0
	for (i = 0; i < 26; i++){
		arr[i] = 0;
	}
	//check num of alphabet ball
	if ((n >= 1)&&(n <= 50)){
		for (i = 0; i < n; i++){
			scanf(" %c", &x);
			if (x == 'A'){
				arr[0]+=1;
			}
			else if (x == 'B'){
				arr[1]+=1;
			}
			else if (x == 'C'){
				arr[2]+=1;
			}
			else if (x == 'D'){
				arr[3]+=1;
			}
			else if (x == 'E'){
				arr[4]+=1;
			}
			else if (x == 'F'){
				arr[5]+=1;
			}
			else if (x == 'G'){
				arr[6]+=1;
			}
			else if (x == 'H'){
				arr[7]+=1;
			}
			else if (x == 'I'){
				arr[8]+=1;
			}
			else if (x == 'J'){
				arr[9]+=1;
			}
			else if (x == 'K'){
				arr[10]+=1;
			}
			else if (x == 'L'){
				arr[11]+=1;
			}
			else if (x == 'M'){
				arr[12]+=1;
			}
			else if (x == 'N'){
				arr[13]+=1;
			}
			else if (x == 'O'){
				arr[14]+=1;
			}
			else if (x == 'P'){
				arr[15]+=1;
			}
			else if (x == 'Q'){
				arr[16]+=1;
			}
			else if (x == 'R'){
				arr[17]+=1;
			}
			else if (x == 'S'){
				arr[18]+=1;
			}
			else if (x == 'T'){
				arr[19]+=1;
			}
			else if (x == 'U'){
				arr[20]+=1;
			}
			else if (x == 'V'){
				arr[21]+=1;
			}
			else if (x == 'W'){
				arr[22]+=1;
			}
			else if (x == 'X'){
				arr[23]+=1;
			}
			else if (x == 'Y'){
				arr[24]+=1;
			}
			else if (x == 'Z'){
				arr[25]+=1;
			}
		}
	}
	//num of ball(ryoma collect)
	for (i = 0; i < 26; i++){
		if (arr[i] > 1)
			count+=arr[i];
	}
	if (count == 0){
		printf("NO");
	}
	else if (count > 1){
		printf("%d\n", count);
		if (count > n-count){
			printf("YES");
		}
		else if (count <= n-count){
			printf("NO");
		}
	}
}