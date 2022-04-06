#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int board[][BOARD_SIZE],int x,int y){
    board[y][x] = 'B';
    for(int i = y, j = x ; i >= 0 && j >= 0; i--, j--){ 
        board[i][j] = 'X'; //ปริ้นท์แถวเฉียงซ้ายบน
    }
    for(int i = y, j = x ; i >= 0 && j < BOARD_SIZE; i--, j++){
        board[i][j] = 'X'; //ปริ้นท์แถวเฉียงขวาบน
    }
    for(int i = y, j = x ; i < BOARD_SIZE && j >= 0; i++, j--){
        board[i][j] = 'X'; //ปริ้นท์แถวเฉียงซ้ายล่าง
    }
    for(int i = y , j = x ; i < BOARD_SIZE && j < BOARD_SIZE; i++, j++){
        board[i][j] = 'X'; //ปริ้นท์แถวเฉียงขวาล่าง
    }
}

int main(){
    int xPos,yPos,i,j;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&xPos,&yPos);
    int board[BOARD_SIZE][BOARD_SIZE];
    for(i = 0; i < BOARD_SIZE; i++){
        for(j = 0;j< BOARD_SIZE; j++){
            board[i][j] = ' ';
        }
    }
    bishopMoves(board,xPos,yPos);
    printf("  0 1 2 3 4 5 6 7");
    for(i = 0; i < BOARD_SIZE; i++){
            printf("\n------------------\n");
            printf("%d|",i);
        for(j = 0; j < BOARD_SIZE; j++){
            printf("%c|",board[i][j]);
        }
    }
    printf("\n------------------");
}
