#include <stdio.h>

int main(){
    int i,j,k,l,m,n;
    printf("Enter the first number: ");
    scanf("%d",&n);
    printf("Enter the second number: ");
    scanf("%d",&m);
    for(i=1;i<=n*m;i++){
        for(j=1;j<=n*m;j++){
            if(i%n==0 && j%m==0){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
}