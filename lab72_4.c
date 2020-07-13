#include <stdio.h>
#include <string.h>
 
int main() {
    int l, n;
    scanf("%d", &l);
    scanf("%d", &n);

    char cmp[l + 1], str[l + 1];
 
    scanf("%s", cmp); // start
 
    for (int i = 1; i <= n; i++) {
        scanf("%s", str);
        for (int i = 0, attmp = 0; str[i]; i++) {
            if (str[i] != cmp[i])
                attmp++;
            if (attmp == 3) {
                printf("%s", cmp);
                return 0;
            }
        }
        strcpy(cmp, str);
    }
 
    printf("%s", str);
    return 0;
}