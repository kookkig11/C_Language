#include <stdio.h>
int is_prime(int m){
	if (m == 1) { //prime never be 1 & it's begin 2 3 5 ...
		return 0;
	}

	int count = 0; //count num that can mod 1 2 3 .. should be 2 count(only 1, this num)
	for (int j = 1; j <= m; j++) {
		if (m%j == 0) {
			count += 1;
		}
	}

	if (count > 2) {
		return 0;
	}
	else {
		return 1;
	}
}

int main(){
  int i, n;
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (is_prime(i))
      printf("%d is a prime number.\n", i);
  }

  return 0;
}