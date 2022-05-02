#include <iostream>

int main(){
    int x,y,z,temp;
    char a,b,c;
    char input[4];
    scanf("%d %d %d",&x,&y,&z);
    std::cin >> input;
    if(z<y){
        temp = y;
        y = z;
        z = temp;
    }
    if(z < x){
        temp = x;
        x = z;
        z = temp;
    }
    if(y<x){
        temp = x;
        x = y;
        y = temp;
    }
    for(int i = 0;i < 3;++i){
        if(input[i] == 'A'){
            printf("%d",x);
        }else if(input[i] == 'B'){
            printf("%d",y);
        }else if(input[i] == 'C'){
            printf("%d",z);
        }
        printf(" ");
    }
}