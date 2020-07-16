#include <stdio.h>
#include <string.h>
struct Student{
    char name[10];
    float grade;
    float count;
};

int main()
{
    struct Student std[10];
    int n, i, j, check = 1;
    float g, max, gpa;
    char name[10];
    scanf("%d", &n);
    //create array zero (count)
    for (i = 0; i < n; i++){
        std[i].count = 0;
    }
    for (i = 0; i < n;){
        check = 1;
        scanf("%s %f", name, &g);
        for (j = 0; j < i; j++){
            //strcmp = compare string by ascii code
            if (strcmp(name, std[j].name) == 0){
                n--;
                std[j].grade += g;
                std[j].count += 1;
                check = 0;
            }
        }
        //not same name
        if (check){
        	//strcpy = copy name to student[i].name
            strcpy(std[i].name, name);
            std[i].grade = g;
            std[i].count += 1;
            i++;
        }
    }
    
    //find max grade
    max = 0;
   	for (i = 0; i < n; i++){
        gpa = std[i].grade/std[i].count ;
        if (gpa > max){
            max = gpa;
        }
    }

	//use loop because (student have max grade) maybe more than 1
  	//find name student that have max grade
    for (i = 0; i < n; i++){
        gpa = std[i].grade/std[i].count;
        //max = gpa(in array name of student) >> this student have max grade
        if (max == gpa){
            printf("%s\n",std[i].name);
        }
    }
    return 0;
}