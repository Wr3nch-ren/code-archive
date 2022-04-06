#include <stdio.h>
#include <stdlib.h>

void printchar(int alpha, int i){
    for (int j = 0; j < i; j++){
        printf("%c", alpha - j);
        if (j < alpha - 1){
            printf("-");
        }
        
    }
    for (int j = i; j >= 0; j--){
        if (j != i){
            printf("-");
        }
        printf("%c", alpha - j);
    }
   
}


int main(){
    char N[20];
    fgets(N, 20, stdin);
    int size = atoi(N);
    int width = size * 2 - 2;
    int alphabet = 96+size;
    
    if (size <= 0 || size > 26){
        printf("-");
    }
    else{
        for (int i = 0; i < size; i++){ //ลูปแถวแนวตั้งส่วนบน
            for (int j = 0; j < width;j++){ //ลูปแถวแนวนอน
                printf("-");
            }
            
            printchar(alphabet,i);
            
            for (int j = 0; j < width;j++){
                printf("-");
            }
            width -= 2;
            printf("\n");
        }
        width += 4;
        for (int i = size - 2; i >= 0; i--){
            for (int j = 0; j < width; j++){ 
                printf("-");
            }
           
            printchar(alphabet,i);
            
            for (int j = 0; j < width; j++){ 
                printf("-");
            }
            width += 2;
            printf("\n");
        }

    }
}