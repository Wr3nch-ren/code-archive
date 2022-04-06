// 6 input
// 4 input
// ******
//  *    *
//   *    *
//    ******

// 20 input 
// 6 input
// ********************
//  *                  *
//   *                  *
//    *                  *
//     *                  *
//      ********************

#include <stdio.h>
#include <stdlib.h>

int main(){
    char X[5], Y[5];
    fgets(X, 5, stdin);
    fgets(Y, 5, stdin);
    int row = atoi(X), column = atoi(Y);

    for (int i = 1; i <= column; i++){
        if (i == 1 || i == column)
            for(int j = 1; j <= row; j++){
                printf("*");
            }
        else{
            for(int j = 1; j <= row; j++){
                if(i == 1 || i == column || j == 1 || j == row){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    printf("\n");
    if(i > 1 && i < row);
        int space = 0;
        while(space < i){
            printf(" ");
            space += 1;
        }
    }
} 