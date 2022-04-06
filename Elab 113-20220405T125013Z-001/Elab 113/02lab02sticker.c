#include <stdio.h>
#include <stdlib.h>
int main(){
    char stic[10];
    char money[10];
    int percent;

    fgets(stic, 10, stdin);
    int sticker = atoi(stic); 
    fgets(money, 10, stdin);
    float real_money = atof(money);
    
    if (sticker == 0){
        percent = 0.0;
    } 
    else if (sticker == 1){
        percent = 10.0;
        sticker -= 1;
    }
    else if (sticker == 2){
        percent = 15.0;
        sticker -= 2;
    }
    else if (sticker >= 3 && sticker < 6){
        percent = 20.0;
        sticker -= 3;
    }
    else if (sticker >= 6 && sticker < 9){
        percent = 30.0;
        sticker -= 6;
    }
    else{
        percent = 40.0;
        sticker -= 9;
    } 

    float total = real_money - (real_money * (percent/100.0));

    printf("You get %d percents discount.\n", percent);
    printf("Total amount due is %.2f Baht.\n", total);
    printf("And you have %d stickers left.",sticker);
}