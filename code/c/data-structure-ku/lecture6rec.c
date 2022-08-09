#include <stdio.h>

int a(int n) {
    if (n == 1) {
        return 2;
    } else {
        return a(n - 1) + 3;
    }
}

int main(){
    int input = 5;
    printf("%d", a(input));
}