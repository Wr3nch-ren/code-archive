#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str_N[4];
    int n, N, i, j;
    
    fgets(str_N, 4, stdin);
    
    n = atoi(str_N);
    N = n + 96;

    if (N < 'a' || N > 'z') {
        printf("-");
    }
    else {
        for (i = 0; i < n; i++) {
            for (j = (2*n)-2; j > 2*i; j--) {
                printf("-");
            }
            printf("%c", N);
            for (j = N-1; j >= N-i; j--) {
                printf("-%c", j);
            }
            for (j = N-i+1; j <= N; j++) {
                printf("-%c", j);
            }
            for (j = (2*n)-2; j > 2*i; j--) {
                printf("-");
            }
            printf("\n");
        }
        for (i = n-2; i >= 0; i--) {
            for (j = (2*n)-2; j > 2*i; j--) {
                printf("-");
            }
            printf("%c", N);
            for (j = N-1; j >= N-i; j--) {
                printf("-%c", j);
            }
            for (j = N-i+1; j <= N; j++) {
                printf("-%c", j);
            }
            for (j = (2*n)-2; j > 2*i; j--) {
                printf("-");
            }
            printf("\n");
        }
    }               
}
