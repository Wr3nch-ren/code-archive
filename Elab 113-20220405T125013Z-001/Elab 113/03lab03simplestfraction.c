#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    int gcd;
    while(b > 0){
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}

int main(){
    char num1[20], num2[20];
    fgets(num1, 20, stdin);
    fgets(num2, 20, stdin);
    int a = atoi(num1), b = atoi(num2);

    if (a % b == 0){
        printf("= %d", a/gcd(a,b));
    }
    else{
    printf("= %d/%d", a/gcd(a,b), b/gcd(a,b));
    }
    
}