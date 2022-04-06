#include <stdio.h>
#include <stdlib.h>

int main(){
    char str_n[5];
    fgets(str_n,5,stdin);
    int n = atoi(str_n);
    while (n>=0){
        printf("%d\n",n);
        n-=1;
    }
    return 0;
}
