#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int *a = malloc(n * sizeof(int));
    int *b = malloc(m * sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    int i = 0, j = 0;
    while (i < n && j < m){
        if (a[i] == b[j]){
            printf("%d ", a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    free(a);
    free(b);
    return 0;
}