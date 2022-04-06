#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    char piece;
    int num,xPos,yPos, i, j;
    int board[BOARD_SIZE][BOARD_SIZE];
    for(i = 0; i < BOARD_SIZE;i++){
        for(j = 0; j < BOARD_SIZE;j++){
            board[i][j] = ' ';
        }
    }

    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("\n%c(%d, %d)",&piece, &xPos, &yPos);
        setPieceOnTable(board, piece, xPos, yPos);
    }
    
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7");
    for (i = 0; i < BOARD_SIZE; i++){
        printf("\n%d|",i);
        for(j = 0; j < BOARD_SIZE; j++){
            printf("%c|",board[i][j]);
        }
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[xPos][yPos] = piece;
}