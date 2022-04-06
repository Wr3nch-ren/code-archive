#include <stdio.h>
#include <stdlib.h>

int main(){
    char a_str[5],b_str[5],c_str[5];
    printf("Enter length of side A: ");
    fgets(a_str,5,stdin);
    printf("Enter length of side B: ");
    fgets(b_str,5,stdin);
    printf("Enter length of side C: ");
    fgets(c_str,5,stdin);
    int a = atoi(a_str);
    int b = atoi(b_str);
    int c = atoi(c_str);
    if(a<=0 || b<=0 || c<=0 || a+b==c || b+c==a || a+c==b){
        printf("Triangle type is invalid.");
    }else if(a==b && b==c && a==c){
        printf("Triangle type is equilateral.");
    }else if(a==b || b==c || a==c){
        printf("Triangle type is isosceles.");
    }else{
        printf("Triangle type is scalene.");
    }
    return 0;
}