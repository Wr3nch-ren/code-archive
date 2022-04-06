#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[10];
    fgets(n, 10, stdin);
    int height = atoi(n), column, line; 

    for (line = 1; line < height; line++){
        for (column = 0; column < line; column++){
            printf("*");
        }
        printf("\n");
    }

    for (line; line >= 1; line--){
        
        for (column = 0; column < line; column++){
            printf("*");
        }
        printf("\n");
    }
    
}