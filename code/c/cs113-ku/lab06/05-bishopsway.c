#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int array[][BOARD_SIZE],int x,int y) {
  
    for(int i = y, j = x ; i >= 0 && j >= 0; i--, j--){
        array[i][j] = 'X';
        }
    for(int i = y, j = x ; i >= 0 && j < BOARD_SIZE; i--, j++){
        array[i][j] = 'X';
    }
    for(int i = y, j = x ; i < BOARD_SIZE && j >= 0; i++, j--){
        array[i][j] = 'X';
    }
    for(int i = y , j = x ; i < BOARD_SIZE && j < BOARD_SIZE; i++, j++){
        array[i][j] = 'X';
    }
    array[y][x] = 'B';

}

int main() {

  
    int x,y,i,j;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&x,&y);
    int bishop[BOARD_SIZE][BOARD_SIZE];
    for(i=0;i<BOARD_SIZE;i++){
        for(j=0;j<BOARD_SIZE;j++){
            bishop[i][j] = ' ';
        }
    }
    bishopMoves(bishop,x,y);
    printf("  0 1 2 3 4 5 6 7");
    for(i=0;i<BOARD_SIZE;i++){
            printf("\n------------------\n");
            printf("%d|",i);
        for(j=0;j<BOARD_SIZE;j++){
            printf("%c|",bishop[i][j]);
        }
    }
    printf("\n------------------");

}
