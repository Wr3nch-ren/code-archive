#include <stdio.h>

int F(int n){
    if (n <= 1) return n;
    return F(n-1) + F(n-2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("F(%d) = %d");
}