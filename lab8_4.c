#include <stdio.h>
struct student {
  char id[10];
  int midterm;
  int final;
};
int main() {
  int i;
  char grade[5];
  struct student st[5];
  for (i = 0; i < 5; i++) {
    printf("Enter Student ID: ");
    scanf("%s", st[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &st[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &st[i].final);
    int score = st[i].midterm + st[i].final;
    if (score >= 80) {
      grade[i] = 'A';
    }
    else if (score >= 70 && score < 80) {
      grade[i] = 'B';
    }
    else if (score >= 60 && score < 70) {
      grade[i] = 'C';
    }
    else if (score >= 50 && score < 60) {
      grade[i] = 'D';
    }
    else if (score < 50) {
      grade[i] = 'F';
    }
  }
  for (i = 0; i < 5; i++) {
    printf("Student ID %s receives grade %c.\n", st[i].id, grade[i]);
  }
}