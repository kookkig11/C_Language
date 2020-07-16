#include <stdio.h>
int main(){
	int firstNum, num[4];
	char x;
  	char operator[4];
	
	scanf("%d", &firstNum);
	//input after firstNum
	for (int i = 0; i < 4; i++){
		scanf(" %c %d", &x, &num[i]);
    operator[i] = x;
    x = getchar();
		if (x == '\n'){
			break;
		}
	}

	printf("%d", firstNum);
	if ((operator[0] == '*') || (operator[0] == '/')){ //* t
		printf(" %d %c", num[0], operator[0]);
		
		if ((operator[1] == '*') || (operator[1] == '/')){	// * * t
			printf(" %d %c", num[1], operator[1]);
			
			if ((operator[2] == '*') || (operator[2] == '/')){	// * * * t
				printf(" %d %c", num[2], operator[2]);
				
				if ((operator[3] == '*') || (operator[3] == '/')){	// * * * * t
					printf(" %d %c", num[3], operator[3]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // * * * + t
					printf(" %d %c", num[3], operator[3]);
				}
				else{
				}
			}
			else if ((operator[2] == '+') || (operator[2] == '-')){ // * * + t
				if ((operator[3] == '*') || (operator[3] == '/')){	// * * + * t
					printf(" %d %d %c %c", num[2], num[3], operator[3], operator[2]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ //* * + + t
					printf(" %d %c %d %c", num[2], operator[2], num[3], operator[3]);
				}
				else{
					printf(" %d %c", num[2], operator[2]);
				}	
			}
			else{
			}
		}
		else if ((operator[1] == '+') || (operator[1] == '-')){	// * + t
			if ((operator[2] == '*') || (operator[2] == '/')){	// * + * t
				printf(" %d %d %c", num[1], num[2], operator[2]);
				
				if ((operator[3] == '*') || (operator[3] == '/')){	// * + * * t
					printf(" %d %c %c", num[3], operator[3], operator[1]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // * + * + t
					printf(" %c %d %c", operator[1], num[3], operator[3]);
				}
				else{
					printf(" %c", operator[1]);
				}
			}
			else if ((operator[2] == '+') || (operator[2] == '-')){ // * + + t
				printf(" %d %c", num[1], operator[1]);
				if ((operator[3] == '*') || (operator[3] == '/')){	// * + + * t
					printf(" %d %d %c %c", num[2], num[3], operator[3], operator[2]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // * + + + t
					printf(" %d %c %d %c", num[2], operator[2], num[3], operator[3]);
				}
				else{
					printf(" %d %c", num[2], operator[2]);
				}
			}
			else{
				printf(" %d %c", num[1], operator[1]);
			}	
		}
		else{
		}
	}
	else if ((operator[0] == '+') || (operator[0] == '-')){ // + t
		if ((operator[1] == '*') || (operator[1] == '/')){	// + * t
			printf(" %d %d %c", num[0], num[1], operator[1]);
			
			if ((operator[2] == '*') || (operator[2] == '/')){	// + * * t
				printf(" %d %c", num[2], operator[2]);
				
				if ((operator[3] == '*') || (operator[3] == '/')){	// + * * * t
					printf(" %d %c %c", num[3], operator[3], operator[0]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // + * * + t
					printf(" %d %c %c", num[3], operator[0], operator[3]);
				}
				else{
					printf(" %c", operator[0]);
				}
			}
			else if ((operator[2] == '+') || (operator[2] == '-')){ // + * + t
				if ((operator[3] == '*') || (operator[3] == '/')){	// + * + * t
					printf(" %c %d %d %c %c", operator[0], num[2], num[3], operator[3], operator[2]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ //+ * + + t
					printf(" %c %d %c %d %c", operator[0], num[2], operator[2], num[3], operator[3]);
				}
				else{
					printf(" %c %d %c", operator[0], num[2], operator[2]);
				}
			}
			else{
				printf(" %c", operator[0]);
			}
		}
		else if ((operator[1] == '+') || (operator[1] == '-')){ // + + t
			if ((operator[2] == '*') || (operator[2] == '/')){	// + + * t
				printf(" %d %c", num[0], operator[0]);
			
				if ((operator[3] == '*') || (operator[3] == '/')){	// + + * * t
					printf(" %d %d %c %d %c %c", num[1], num[2], operator[2], num[3], operator[3], operator[1]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // + + * + t
					printf(" %d %d %c %c %d %c", num[1], num[2], operator[2], operator[1], num[3], operator[3]);
				}
				else{
					printf(" %d %d %c %c", num[1], num[2], operator[2], operator[1]);
				}
			}
			else if ((operator[2] == '+') || (operator[2] == '-')){ // + + + t
				if ((operator[3] == '*') || (operator[3] == '/')){	// + + + * t
					printf(" %d %c %d %c %d %d %c %c", num[0], operator[0], num[1], operator[1], num[2], num[3], operator[3], operator[2]);
				}
				else if ((operator[3] == '+') || (operator[3] == '-')){ // + + + + t
					printf(" %d %c %d %c %d %c %d %c", num[0], operator[0], num[1], operator[1], num[2], operator[2], num[3], operator[3]);
				}
				else{
					printf(" %d %c %d %c %d %c", num[0], operator[0], num[1], operator[1], num[2], operator[2]);
				}
			}
			else{
				printf(" %d %c %d %c", num[0], operator[0], num[1], operator[1]);
			}
		}
		else{
			printf(" %d %c", num[0], operator[0]);
		}
	}
	else{
	}
}