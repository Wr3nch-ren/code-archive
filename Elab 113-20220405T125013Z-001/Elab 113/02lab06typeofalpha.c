#include <stdio.h>
#include <stdlib.h>
int main(){
    char charac[5];
    fgets(charac, 5, stdin);
    int alpha = charac[0];

    if (alpha >= 48 && alpha <= 57){
        printf("Output: digit");
        }
    else if(alpha >= 65 && alpha <= 90){
        printf("Output: upper case");
    } 
    else if(alpha >= 97 && alpha <= 122){
        printf("Output: lower case");
    }
    else{
        printf("Output: others");
    }

}