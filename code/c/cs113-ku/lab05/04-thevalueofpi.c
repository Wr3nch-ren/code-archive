#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double n,i;
    double approxPi = 0.0000000000;
    char n_str[10];
    printf("Enter n: ");
    fgets(n_str,10,stdin);
    n = atof(n_str);
    for(i=1;i<=n;i++){
        if(fmod(i,2)!=0){
            approxPi += 4/((2*i)-1);
        }else if(fmod(i,2)==0){
            approxPi -= 4/((2*i)-1);
        }
    }
    printf("%.10lf",approxPi);
    return 0;
}