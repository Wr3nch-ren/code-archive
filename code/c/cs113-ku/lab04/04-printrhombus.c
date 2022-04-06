#include <stdio.h>
#include <stdlib.h>

int main(){
    char x_str[10],y_str[10];
    int x,y;
    fgets(x_str,10,stdin);
    fgets(y_str,10,stdin);
    x = atoi(x_str);
    y = atoi(y_str);
    for(int i = 0;i < y;i++){
        int temp = i;
        int k = 0;
        while(k < temp){
            printf(" ");
            k += 1;
        }
        if(i == 0 || i == y-1){
            for(int j = 0;j < x;j++){
                printf("*");
            }
        }else{
            for(int j = 0;j < x;j++){
                if(j == 0 || j == x-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        if(i!=y-1){
            printf("\n");
        }
    }
    return 0;
}