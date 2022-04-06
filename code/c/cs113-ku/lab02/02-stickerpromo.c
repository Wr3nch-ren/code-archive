#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[5],p[10];
    int discount;
    float total;
    fgets(s,5,stdin);
    fgets(p,10,stdin);
    int sticker = atoi(s);
    float price = atof(p);
    if(sticker >= 9){
        discount = 40;
        sticker -= 9;
    }else if(sticker>=6){
        discount = 30;
        sticker -= 6;
    }else if(sticker>=3){
        discount = 20;
        sticker -= 3;
    }else if(sticker>=2){
        discount = 15;
        sticker -= 2;
    }else if(sticker>=1){
        discount = 10;
        sticker -= 1;
    }else{
        discount = sticker = 0;
    }
    printf("You get %d percents discount.\n",discount);
    total = price-(price*discount/100);
    printf("Total amount due is %.2f Baht.\n",total);
    printf("And you have %d stickers left.\n",sticker);
    return 0;
}