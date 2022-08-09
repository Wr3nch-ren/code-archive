#include <stdio.h>

int main(){
    int MAX_SEAT_PER_ROW = 6;
    int tableAmount;
    scanf("%d", &tableAmount);
    if(tableAmount < 1){
        printf("Error");
    }
    else if(tableAmount > 40){
        printf("Error!");
    }else {
        char table[tableAmount];
        for (int i = 0; i < tableAmount; i++) {
            table[i] = 'X';
        }
        int bookedSeat, i = 0;
        scanf("%d", &bookedSeat);
        while (1) {
            if (i == bookedSeat) {
                break;
            }
            int x, y, pos;
            scanf("%d %d", &x, &y);
            pos = (x - 1) * MAX_SEAT_PER_ROW + y - 1;
            if (y > 6 || pos >= tableAmount) {
                printf("%d %d Out of range!\n", x, y);
                continue;
            } else if(table[pos] == 'X'){ 
                table[pos] = 'S';
            }
            i++;
        }
        for (int j = 0; j < tableAmount; j++) {
            if(j % MAX_SEAT_PER_ROW != MAX_SEAT_PER_ROW-1){
                printf("%c ", table[j]);
            }else{
                printf("%c\n", table[j]);
            }
        }
    }
}