#include <stdio.h>
#include <stdlib.h>
#define SIZE sizeof(int)

int main(){
    char n[5];
    fgets(n, 5, stdin);
    int number = atoi(n), index = SIZE - 1;
    int binary[SIZE];
    printf("Binary number of %d is ", number);

    while (index >= 0){
        binary[index] = number & 1;
        index--;
        number >>= 1;
    }
    
    for(int i = 0; i < SIZE; i++){
        printf("%d", binary[i]);
    }
    printf(".");
}