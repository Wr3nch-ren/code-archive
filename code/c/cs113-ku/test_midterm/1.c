//input: 10 100 15 30
//output: 
//75
//15
//45
#include <stdio.h>

int main(){
    int m,n,c,d;
    scanf("%d %d %d %d",&m,&n,&c,&d);
    for(int i=n;i>m;--i){
    if(i%c==0 && i%d!=0)
        printf("%d\n",i);
    }
}