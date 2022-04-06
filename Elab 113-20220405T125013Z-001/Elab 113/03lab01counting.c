#include <stdio.h>
#include <stdlib.h>
int main(){
    char numstr[5];
    fgets(numstr, 5, stdin);
    int number = atoi(numstr);
    
    for (int i = number; i >= 0; i--){
        printf("%d\n",i);
    }
}