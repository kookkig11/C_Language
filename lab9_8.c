#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char filename[]) {
    int i, j, no = 0, nStock, found = 0, amount;
    char buffer[60], name[30];
    double totalCost;
    FILE *fp = fopen(filename, "r");
    fscanf(fp, "%d\n", &nStock);
    Product stock[nStock];
    while (fgets(buffer, 60, fp)) {
        for (j = 0; buffer[18+j] != ','; j++)
            name[j] = buffer[18+j];
        name[j] = '\0';
        for (i = 0; i < nStock; i++) {
            if (!strcmp(stock[i].name, name)) {
                sscanf(buffer + 19 + j, "%d,%lf", &amount, &totalCost);
                stock[i].amount += amount;
                stock[i].totalCost += totalCost;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(stock[no].name, name);
            sscanf(buffer + 19 + j, "%d,%lf", &stock[no].amount, &stock[no].totalCost);
            no++;
        }
        found = 0;
    }
    fclose(fp);
    printStock(stock, nStock);
}
int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}