#include <stdio.h>

int main(){
    long long n;   
    printf("Input n = ");
    scanf("%lld",&n);
    printf("n^2 = %lld\n", n * n);
    long long check = n, divide = 1;
    while(check > 0){
        check /= 10;
        divide *= 10;
    }
    
    if (n * n % divide == n){
        printf("Yes. %d is automorphic number.",n);
    }
    else{
        printf("No. %d is not automorphic number.",n);
    }
    
}