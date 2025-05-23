#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Please Input Dimension of Matrix (m*n): ");
    scanf("%d*%d", &m, &n);
    float a[m][n];
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Input Number for (%d, %d): ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    printf("\n=== Original Matrix ===\n");
    for(i = 0; i<m ; ++i){
        for(j=0; j<n; ++j){
            printf("%8.2f",a[i][j]);
        }
        printf("\n");
    }
    printf("\n=== Transpose Matrix ===\n");
    for(j=0; j<n; ++j){
        for(i = 0; i<m ; ++i){
            printf("%8.2f",a[i][j]);
        }
        printf("\n");
    }
}