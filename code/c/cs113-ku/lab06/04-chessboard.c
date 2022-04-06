#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    
int numPieces,i,xP,yP,j,k;
    char pieceChar;
    int boardtemp[BOARD_SIZE][BOARD_SIZE];
    for(j=0;j<BOARD_SIZE;j++){
        for(k=0;k<BOARD_SIZE;k++){
            boardtemp[k][j] = ' ';
        }
    }
    scanf("%d",&numPieces);
    for(i=0;i<numPieces;i++){
        scanf("\n%c(%d, %d)",&pieceChar,&xP,&yP);
        setPieceOnTable(boardtemp,pieceChar,xP,yP);
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7");
    for(j=0;j<BOARD_SIZE;j++){
        printf("\n%d|",j);
        for(k=0;k<BOARD_SIZE;k++){
            printf("%c|",boardtemp[k][j]);
        }
    }

}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    
board[xPos][yPos] = piece;

}