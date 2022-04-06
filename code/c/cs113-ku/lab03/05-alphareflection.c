#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[5];
    fgets(n_str,5,stdin);
    int n = atoi(n_str);
    if(n<=0 || n>26){
        printf("-");
    }else{
        for(int j=n;j>1;j--){
            printf("%c-",97+j-1);  
        }
        printf("%c",97);
        for(int i=2;i<=n;i++){
            printf("-%c",97+i-1);
        }
    }
    return 0;
}