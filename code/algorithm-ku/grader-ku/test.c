#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int compare_int(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(void) {
    char s[MAX_LEN];
    // read line of integers
    fgets(s, MAX_LEN, stdin);
    // convert to array of int
    int n = 0;
    char *p = strtok(s, " ");
    int *arr = malloc(MAX_LEN * sizeof(int));
    while (p != NULL) {
        arr[n++] = atoi(p);
        p = strtok(NULL, " ");
    }
    // sort
    qsort(arr, n, sizeof(int), compare_int);
    // print
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    free(arr);
    return 0;
}