#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char pizza_size_str[3],pepperoni_str[3],cheese_str[3],mushroom_str[3];
    int SIZE_S = 10,SIZE_M = 16,SIZE_L = 20,FIXEDCOST = 5,BASECOST = 2;
    float extracost = 0,PEPPERONI = 0.5,CHEESE = 0.25, MUSHROOM = 0.30;
    float cost,area;
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(pizza_size_str,3,stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str,3,stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str,3,stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str,3,stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int pizza_size = atoi(pizza_size_str);
    int pepperoni = atoi(pepperoni_str);
    int cheese = atoi(cheese_str);
    int mushroom = atoi(mushroom_str);
    if(pepperoni==1){
        extracost = extracost + PEPPERONI;
    }
    if(cheese==1){
        extracost = extracost + CHEESE;
    }
    if(mushroom==1){
        extracost = extracost + MUSHROOM;
    }
    if (pizza_size==1){
        area = (M_PI*(SIZE_S * SIZE_S))/4.0;
    }else if(pizza_size==2){
        area = (M_PI*(SIZE_M * SIZE_M))/4.0;
    }else if(pizza_size==3){
        area = (M_PI*(SIZE_L * SIZE_L))/4.0;
    }
    cost = FIXEDCOST + (extracost * area) + (BASECOST * area);
    printf("Your order costs %.2f baht.\n", cost*1.5);
    printf("Thank you.");
    return 0;
}
