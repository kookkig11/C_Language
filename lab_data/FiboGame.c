#include <stdio.h>
int main() {
	int T, N;
	scanf("%d", &T);
	int result[T]; //set team -use when end program

	for (int i = 0; i < T; i++) {
	    scanf("%d", &N);
	    
	    //set fibonacci
      	int fibo[100];
      	// 1, 1, 2, 3, 5, 8, ... >> fibo(n)=fibo(n-1)+fibo(n-2)
      	fibo[0] = 1;
      	fibo[1] = 1;
      	for (int j = 2; j <= N; j++) {
        	fibo[j] = fibo[j-1] + fibo[j-2];
          	if (fibo[j] > N) {
            	break;
          	}
      	}

     	int count = 0;
    	int team = 4;
    	//if can get ball , team--; >> 3 2 1 (0 = 3)
   		while (N != 0) {
        	if (fibo[count] > N) {
            	N -= fibo[count-1];
            	count = 0;	//begin again
            	team--;

            	if (team == 0) {
                	team = 3;
            	}
          	}
          	else if (fibo[count] == N) {
            	N -= fibo[count];
            	count = 0;	//begin again
            	team--;
            
            	if (team == 0) {
                	team = 3;
            	}
          	}
          	count++;
      	}
      	printf("Team%d\n", team);
  	}
  	return 0;
}