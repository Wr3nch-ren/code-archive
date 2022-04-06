#include <stdio.h>
#include <stdlib.h>

int main(){
    char m_str[5], n_str[5];
    fgets(m_str,20,stdin);
    fgets(n_str,20,stdin);
    int m = atoi(m_str);
    int n = atoi(n_str);
    int numerator,denominator,remainder,gcd,lcm,x,y;
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
    x = m/gcd;
    y = n/gcd;
    if(y==1){
        printf("= %d",x);
    }else{
        printf("= %d/%d",x,y);
    }
    return 0;
}
