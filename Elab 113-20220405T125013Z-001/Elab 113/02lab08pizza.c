#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char size[10]; 
    char pep[10];
    char cheese[10];
    char mush[10];

    float extra = 0;
    float area;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size, 10, stdin);
    
    if (size[0] == '1'){
        area = M_PI * (10*10) / 4.0;
    }
    else if (size[0] == '2'){
        area = M_PI * (16*16) / 4.0;
    }
    else if (size[0] == '3'){
        area = M_PI * (20*20) / 4.0;
    }
    
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pep, 10, stdin);
    if (pep[0] == '1'){
        extra += 0.5;
    }

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese, 10, stdin);
    if (cheese[0] == '1'){
        extra += 0.25;
    } 
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mush, 10, stdin);
    if (mush[0] == '1'){
        extra += 0.30;
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    // คำนวน
    float cost = 5 + (2 * area) + (extra * area);
    printf("Your order costs %.2f baht.\nThank you.\n",1.5*cost);

}