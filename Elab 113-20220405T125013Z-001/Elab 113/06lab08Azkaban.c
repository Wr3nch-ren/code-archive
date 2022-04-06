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
        prisoners[i] = i + 1;
    }

    int *killerPtr = &prisoners[0];

    // Select prisoner to be killed
    for (i = 0; i < numPrisoners; i++) {
        int j = i ? killed[i-1] : 0, count = 0;
        
        while (1) {
            if (j == numPrisoners)
                j = 0;
            if (prisoners[j])
                count++;
            if (count == m) {
                killerPtr = &prisoners[j];
                break;
            }
            j++;
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
    for (i = 0; i < size; i++) {
        if (array[i] == killedPrisoner) {
            array[i] = 0;
            break;
        }
    } 
}