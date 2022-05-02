#include <iostream>

int main(){
    int a=1,b=0,c=0,temp=0;
    char input[51];
    scanf("%s", input);
    int strlen = sizeof(input)/sizeof(input[0]);
    for(int i=0;i < strlen;++i){
        if(input[i]=='A'){
            temp = a;
            a = b;
            b = temp;
        }
        if(input[i]=='B'){
            temp = b;
            b = c;
            c = temp;
        }
        if(input[i]=='C'){
            temp = c;
            c = a;
            a = temp;
        }
    }
    if(a)
        printf("1");
    if(b)
        printf("2");
    if(c)
        printf("3");
}