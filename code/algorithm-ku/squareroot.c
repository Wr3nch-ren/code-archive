#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    while(i*i <= n){
        i++;
    }
    printf("%d",i-1);
}