#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char * stoupper(const char *s) {
    static char new_s[100]; // build new_string
    for (int i = 0; s[i]; i++)
        new_s[i] = toupper(s[i]);
    return new_s;

}

int main(){
    char s[100];
    char* result;

    scanf("%s",s);
    result = stoupper(s);
        if (result == s) printf("ERROR.\n");
    printf("%s\n",result);
}