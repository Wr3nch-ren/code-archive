#include <stdio.h>
#include <stdlib.h>
int main(){
    char n[10];
    fgets(n, 10, stdin);
    int number = atoi(n);
    int ascii = 96 + number;    
    if (number > 26 || number <= 0){
        printf("-");
    }
    
    else{
        for (int i = ascii; i > 97; i--){
            printf("%c-",i);
        }
        if (number > 1){
            printf("a-");
        }
        for (int i = 98; i < ascii; i++){
            printf("%c-",i);
        }
        printf("%c", ascii);
    }  
}