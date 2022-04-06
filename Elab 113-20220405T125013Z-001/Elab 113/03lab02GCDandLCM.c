#include <stdio.h>
#include <stdlib.h>

int main(){
    char firstnum[20], secondnum[20];
    long long M, N, gcd, lcm, a, b;
    
    fgets(firstnum, 20, stdin);
    M = atoll(firstnum);
    fgets(secondnum, 20, stdin);
    N = atoll(secondnum);
    a = M;
    b = N;
    
    while(b > 0){
        gcd = b;
        b = a % b;
        a = gcd;
    }
    lcm = (M * N) / gcd;
    
    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld\n",lcm);
}