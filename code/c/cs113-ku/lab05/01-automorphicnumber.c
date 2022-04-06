#include <stdio.h>
#include <stdlib.h>

int main(){
    long long n;
    int automorph = 1;
    printf("Input n = ");
    scanf("%lld",&n);
    printf("n^2 = %lld\n", n*n);
    long long powerN = n*n;
    long long temp = n;
    while(1){
        if(temp<=0)
            break;
        else if(temp%10==powerN%10){
            temp/=10;
            powerN/=10;
        }else{
            automorph = 0;
            break;
        }
    }
    if(automorph==1)
        printf("Yes. %lld is automorphic number.",n);
    else
        printf("No. %lld is not automorphic number.",n);
}