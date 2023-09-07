#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_NODE 5
//Create 2d array with 5 nodes
int** createGraphArray(int n){
    //Make matrix size n*n
    int **aM = malloc(sizeof(int*)*n);
    for (int i=0; i<n; i++){
        aM[i] = malloc(sizeof(int)*n);
        for (int j=0; j<n; j++)
            aM[i][j] = 0;
    }
    return aM;
}

//Add directed edge
void addEdge(int** array, int i, int j) {
    array[i-1][j-1] = 1;
}

//Print adjacency matrix
void printMatrix(int** array, int n){
    for(int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}

//Driver
int main() {
    int sizeOfArray = NUMBER_OF_NODE;
    int** matrix = createGraphArray(sizeOfArray);
    addEdge(matrix,1,2);
    addEdge(matrix,1,4);
    addEdge(matrix,2,5);
    addEdge(matrix,3,1);
    addEdge(matrix,3,4);
    addEdge(matrix,4,5);
    printMatrix(matrix,sizeOfArray);
    return 0;
}