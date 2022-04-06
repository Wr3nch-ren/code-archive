#include <stdio.h>
#include <stdlib.h>

int dectobin(int n){
    if (n==0){
        return 0;
    }
    dectobin(n/2);
    printf("%d", n % 2);
}

int main(){
    char n_str[10];
    fgets(n_str,10,stdin);
    int n = atoi(n_str);
    if (n==0)
        printf("0");
    else
        dectobin(n);
    return 0;
}