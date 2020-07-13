#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
    int numPrisoners, m, i;

    scanf("%d", &numPrisoners);
    scanf("%d", &m);

    int prisoners[numPrisoners];
    int killed[numPrisoners];

    // generate array 1 to numPrisoners
    for (i = 0; i < numPrisoners; i++) {
        prisoners[i] = i + 1; // 1 2 3 .. 10
    }

    int *killerPtr = &prisoners[0];

    // printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
    // printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++) {
        killerPtr += m - 1; //array will start at 0 1 2 3..  so killerPtr sort at (m-1) = 2 5 8 ..
        while (killerPtr >= prisoners + numPrisoners/*value of prison*/ - i) {
            killerPtr -= numPrisoners - i;
        }

        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);

    }

    for (i = 0; i < numPrisoners; i++) {
        printf("%d ", killed[i]);
    }
}

void removeKilled(int *array, int size, int killedPrisoner)
{
    int i;
    for (i = 0; array[i] != killedPrisoner; i++);
    for (; i < size; i++) {
        if (i == size - 1) {
            array[i] = 0;
        }
        else {
            array[i] =  array[i + 1];
        }
    }
}