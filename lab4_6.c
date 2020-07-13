#include <stdio.h>
int main(){
	int n, i, credit;
	char grade;
	float numG, gpa, up = 0, down = 0;
	printf("Enter number of subject(s): ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		printf("Enter credit,grade for subject #%d: ", i);
		scanf("%d,%c", &credit, &grade);
		if (grade == 'a' || grade == 'A') {
			numG = 4.0;
		}
		else if (grade == 'b' || grade == 'B') {
			numG = 3.0;
		}
		else if (grade == 'c' || grade == 'C') {
			numG = 2.0;
		}
		else if (grade == 'd' || grade == 'D') {
			numG = 1.0;
		}
		else if (grade == 'f' || grade == 'F') {
			numG = 0.0;
		}
		up += (credit*numG);
		down += credit;
	}
	gpa = up/down;
	printf("GPA = %.2f", gpa);
}