#include<stdio.h>

int main(){
    int dups[42] = {0};
    int sum = 0,input,index;
    for(int i = 0; i < 10; ++i){
        scanf("%d",&input);
        index = input%42;
        dups[index] = 1;
    }
    for(int i = 0; i < 42;++i){
        if(dups[i]){
            ++sum;
        }
    }
    printf("%d",sum);
}