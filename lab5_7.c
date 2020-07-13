#include <stdio.h>
int main() {
	int n, i, j;
	printf("Enter the number of rows or columns: ");
	scanf("%d",&n);
	int a[n][n];
	// Assign value to array a
	int start = 1;
	for (i = 0; i < n; i++) {
		int start2 = start;
		for (j = 0; j < n; j++) {
			a[i][j] = start2;
			start2++;
		}
		start++;
	}

	// Print all values in array a
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)		
			printf("%2d ", a[i][j]);
    	printf("\n");
    }
	return 0;
}