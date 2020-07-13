#include <stdio.h>
int main() {
	int a, b, c, x, y, z;
	printf("Enter length of side A: ");
	scanf("%d", &a);
	printf("Enter length of side B: ");
	scanf("%d", &b);
	printf("Enter length of side C: ");
	scanf("%d", &c);
	printf("Triangle type is ");
	x = a + b;
	y = a + c;
	z = b + c;
	if (a == b && b == c && a == c) {
		printf("equilateral.");
	}
	else if (x <= c || y <= b || z <= a || (a <= 0 || b <= 0 || c <= 0)) {
		printf("invalid.");
	}
	else if ((a == b && x > c) || (a == c && y > b) || (b == c && z > a)) {
		printf("isosceles.");
	}
	else if (a != b !=c) {
		printf("scalene.");
	}
}