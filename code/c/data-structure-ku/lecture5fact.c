#include <stdio.h>

long long int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    int input;
    scanf("%d", &input);
    printf("%lld",fact(input));
}