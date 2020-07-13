#include <stdio.h>
int main(){
	int h, m, opH, i;
	char ap, mm;
	printf("Enter a 12-hour time [eg. 12:34 am]: ");
	scanf("%d:%d %c%c", &h, &m, &ap, &mm);
	if (ap == 'a' || ap == 'A') {
		if (h == 12) {
			opH = 0;
		}
		else {
			opH = h;
		}
	}
	else if (ap == 'p' || ap == 'P') {
		if (h == 12) {
			opH = 12;
		}
		else {
			for (i = 1; i <= h; i += 1) {
				opH = 12;
				opH += i;
			}
		}
	}
	printf("Equivalent 24-hour time: %02d:%02d", opH, m);
}