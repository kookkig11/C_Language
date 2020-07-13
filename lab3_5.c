#include <stdio.h>
int fibo(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1 || n == 2){
		return 1;
	}
	else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){
	int n, i;
	scanf("%d", &n);
	for (i = 0; i <= n; i+=1) {
		printf("F(%d) = %d\n", i,fibo(i));
	}
}