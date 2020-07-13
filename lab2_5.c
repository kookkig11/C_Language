#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	int x = c;
	printf("Output: ");
	if (x >= 48 && x <= 57) {
		printf("digit");
	}
	else if (x >= 65 && x <= 90) {
		printf("upper case");
	}
	else if (x >= 97 && x <= 122) {
		printf("lower case");
	}
	else {
		printf("others");
	}
}