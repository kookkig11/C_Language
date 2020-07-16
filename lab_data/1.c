#include <stdio.h>
#include <string.h>
int main(){
	char text1[40], text2[40];
	int i, j, x = 0, count = 0;;
	
	//input
	gets(text1);
	gets(text2);
	
	//lenght off string
  	int n = strlen(text1);
  	int m = strlen(text2);

	for (i = 0; i < m; i++){
    	//text1 is main
	    for (j = 0; j < n; j++){
	     	if ((text2[i] == text1[j]) && (j >= x)){
	        	count++;
	        	x = j;
	        	break;
	      	}
	    }
  	}

	if (count == m){
	    printf("True");
	}
	else{
	    printf("False");
	}
	return 0;
}