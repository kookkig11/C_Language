#include <stdio.h>
#include <string.h>
typedef struct {
  char id[12];
  int score;
} studentRecord;

void init(studentRecord list[], int size) {
  int i;
  strcpy(list[0].id, "55100001");
  strcpy(list[1].id, "55100002");
  strcpy(list[2].id, "55100003");
  for (i = 0; i < size; i++) {
    list[i].score = 0;
  }
}

void enterScore(studentRecord list[], int size){
  int i, sc;
  char n[12];
  scanf("%s %d", n, &sc);
  for (i = 0; i < size; i++) {
    if (strstr(list[i].id, n) != '\0') {
      list[i].score = sc;
    }
  }
}

void printRecords(studentRecord list[], int size) {
    int i;
    printf("   ID        Score\n");
    for (i = 0; i < size; i++) {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main() {
    int enter;
    studentRecord list[3];

    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);
}