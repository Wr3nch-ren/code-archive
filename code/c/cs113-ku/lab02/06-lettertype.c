#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    c = getchar();
    if (c>=97 && c<=122){
        printf("Output: lower case");
    }else if (c>=49 && c<=57){
        printf("Output: digit");
    }else if (c>=65 && c<= 90){
        printf("Output: upper case");
    }else{printf("Output: others");}
    return 0;
}