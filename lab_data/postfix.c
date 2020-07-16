#include <stdio.h>
#include <string.h>
int main(){
	char infix[50];
	char operator[5];
	int check;

	gets(infix);
	int l = strlen(infix);

	//print first num
	if (infix[0] != ' ' && infix[1] != ' ' && infix[2] != ' '){
		printf("%c%c%c", infix[0], infix[1], infix[2]);
	}
	else if (infix[0] != ' ' && infix[1] != ' '){
		printf("%c%c", infix[0], infix[1]);
	}
	else{
		printf("%c", infix[0]);
	}

  	for (int i = 2; i < l; i++){
    	if (infix[i] == '-' || infix[i] == '+'){
      	check = 1;
      	//print num
      	while (1){ //true
        	printf("%c", infix[i + check]);
       		check++;

        	if (infix[i + check] == ' ' || infix[i + check] == '\0') {
        		break;
        	}
      	}
      	
      	//print operator
      	printf(" %c", infix[i]);
      	//countOperator--;
    	}
  	}
  	return 0;
}