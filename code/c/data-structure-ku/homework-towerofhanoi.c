#include <stdio.h>

void print(int size, int array[][size]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("Tower %c: ", 'A' + i);
        for (j = size - 1; j >= 0; j--) {
            if (array[i][j] >= 0) {
                printf("%d ", array[i][j]);
            }
        }
        printf("\n");
    }
}

void move(int n, char src, char aux, char target, int size, int array[][size]) 
{
    static int count = 0;

    if (n == 1) {
        printf("Move #%d: move(1, %c, %c, %c)\n", ++count, src, aux, target);
        array[src - 'A'][0] = -1;
        array[target - 'A'][0] = 0;
        print(size, array);
        return;
    }
    move(n - 1, src, target, aux, size, array);

    printf("Move #%d: move(1, %c, %c, %c)\n", ++count, src, aux, target);
    array[src - 'A'][n-1] = -1;
    array[target - 'A'][n-1] = n-1;
    print(size, array);

    move(n - 1, aux, src, target, size, array);
}

int main()
{
    int n, i, j;

    printf("N = ");
    scanf("%d", &n);

    int array[3][n];
    for (i = 0; i < n; i++) {
        array[0][i] = i;
    }
    for (i = 1; i < 3; i++) {
        for (j = 0; j < n; j++) {
            array[i][j] = -1;
        }
    }
    printf("Start\n");
    print(n, array);
    move(n, 'A', 'B', 'C', n, array);

    return 0;
}