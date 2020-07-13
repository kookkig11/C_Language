#include <stdio.h>
int main() {
  	int n, check, count, num;
  	scanf("%d", &n);
  	scanf("%d", &check);
	num = n;
 	for (int i = 0; i < 9; i++) {
    	if (n%10 == check) {
    		count++;
    	}
    	n /= 10;
  	}
  
	if (count == 0) {
	    printf("There is no \"%d\" in %d.", check, num);
	} else if (count == 1) {
	    printf("There is only 1 \"%d\" in %d.", check, num);
	} else {
	    printf("There are %d \"%d\"(s) in %d.", count, check, num);
	}
}