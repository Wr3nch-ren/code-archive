#include <stdio.h>
#include <stdlib.h>

int main(){
    char m_str[1000], n_str[1000];
    fgets(m_str,1000,stdin);
    fgets(n_str,1000,stdin);
    long long m = atoll(m_str);
    long long n = atoll(n_str);
    long long numerator,denominator,remainder,gcd,lcm;
    if(m>n){
        numerator = m;
        denominator = n;
    }else{
        numerator = n;
        denominator = m;
    }
    remainder = numerator % denominator;
    while(remainder!=0){
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = (m * n) / gcd;
    printf("GCD: %lld\n",gcd);
    printf("LCM: %lld",lcm);
    return 0;
}
