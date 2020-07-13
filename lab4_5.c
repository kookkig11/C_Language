#include <stdio.h>
 
int dash, chrmax, i, n;
 
void print_rangoli_line() {
    for (i = 0; i < dash; i++)
        printf("-");
    for (i = n - 1; i >= chrmax; i--)
        printf("%c-", 97+i);
    for (i = chrmax + 1; i <= n-1; i++)
        printf("%c-", 97+i);
    for (i = 0; i < dash - 1; i++)
        printf("-");
    printf("\n");
}
 
int main() {
    scanf("%d", &n);
    if (n < 1 || n > 26)
        printf("-");
    else {
        for (dash = n * 2 - 2, chrmax = n - 1; dash > 0; dash -= 2, chrmax--)
            print_rangoli_line();
        for (i = n - 1; i > 0; i--)
            printf("%c-", 97+i);
        for (i = 0; i <= n - 1; i++)
            printf("%c%c", 97+i, i == n - 1 ? '\n':'-');
        for (dash = 2, chrmax = 1; dash <= n * 2 - 2; dash += 2, chrmax++)
            print_rangoli_line();
    }
    return 0;
}