#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    double answer, j = 1.0;
    printf("Enter n: ");
    scanf("%lld", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            answer -= 4.0/j;
        }
        else{
            answer += 4.0/j;
        }
        j += 2.0;
    }
    printf("%lf",answer);
}