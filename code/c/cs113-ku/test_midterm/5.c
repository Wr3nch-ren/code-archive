
#include <stdio.h>
#include <stdlib.h>

float** transpose_matrix(float* original, int m, int n)
{
    
}

int main()
{
    int m, n, i, j;
    printf("Please Input Dimension of Matrix (m*n): ");
    scanf("%d*%d", &m, &n);
    float original[m][n];
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Input Number for (%d, %d): ", i + 1, j + 1);
            scanf("%f", &original[i][j]);
        }
    }

    printf("\n=== Original Matrix ===\n");
    for(i = 0; i<m ; ++i){
        for(j=0; j<n; ++j){
            printf("%8.2f",a[i][j]);
        }
        printf("\n");
    }
    float** transpose = transpose_matrix(original[0], m, n);

    printf("\n=== Transpose Matrix ===\n");
    for(j=0; j<n; ++j){
        for(i = 0; i<m ; ++i){
            printf("%8.2f",a[i][j]);
        }
        printf("\n");
    }
}