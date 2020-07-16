#include <stdio.h>
#include <string.h>

struct Student {
  char name[10];
  float grade;
  float count; //if input same name = count++
};

int main(){
  struct Student student[10];
  int i, n, checkName = 1; //checkName = if input same name in array
  char name[10];
  float g, max, gpa;

  //input list
  scanf("%d", &n);

  //create array zero (count)
  for (i = 0; i < n; i++){
    student[i].count = 0;
  }

  for (i = 0; i < n;){ //don't use i++ = feel bad...
    checkName = 1; //true

    //loop input information(student, grade)
    scanf("%s %f", name, &g);

    for (int j = 0; j < i; j++){
      //strcmp = compare string by ascii code
      if (strcmp(name, student[j].name) == 0){ //equal = 0
        n--;
        student[j].grade+=g;
        student[j].count+=1;
        checkName = 0; //false
      }
    }

    //not same name
    if (checkName){
      //strcpy = copy name to student[i].name
      strcpy(student[i].name, name);
      student[i].grade = g;
      student[i].count+=1;
      i++;
    }
  }

  //find max grade
  max = 0;
  for (i = 0; i < n; i++){
    gpa = student[i].grade/student[i].count; //find gpa from (sum of grades)/num
    if (gpa >= max){
      max = gpa;
    }
  }

  //use loop because (student have max grade) maybe more than 1
  //find name student that have max grade
  for (i = 0; i < n; i++){
    gpa = student[i].grade/student[i].count;
    //max = gpa(in array name of student) >> this student have max grade
    if (max == gpa){
      printf("%s\n", student[i].name);
    }
  }
  return 0;
}