#include <stdio.h>
int main(){
	char str[20];
	gets(str);
	for (int i = 0; i < 20; i++){
		if (str[i] == 'w'){
			str[i] = 'o';
		}
		else if (str[i] == 'o'){
			str[i] = 'w';
		}
		else if (str[i] == 'a'){
			str[i] = 't';
		}
		else if (str[i] == 't'){
			str[i] = 'a';
		}
		else if (str[i] == 'l'){
			str[i] = 'd';
		}
		else if (str[i] == 'd'){
			str[i] = 'l';
		}
	}
	printf("%s", str);
}