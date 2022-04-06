#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,i,j;
    int round = 0;
    printf("Input number of stairs: ");
    scanf("%d",&a);
    int ladder[a];
    while(1){
        if(round==0)
            b = a;
        round += 1;
        printf("---- round %d ----\n", round);
        for(i=0;i<a;i++){
            ladder[i] = '-';
        }
        for(i=0;i<b;i++){
            if (i == b-2){
                ladder[i] = 'O';
            }else if (i == b-1){
                ladder[i] = '^';
            }
        }
        i = 0;
        for(i=0;i<a;i++){
            printf("|-%c-|\n",ladder[i]);
        }
        printf("Input step command: ");
        scanf("%d",&j);
        if(j==0)
            break;
        else{
            if(b-j>a){
                b = a;
            }else if(b-j<=2){
                b = 2;
            }else
                b -= j;
        }
    }
}