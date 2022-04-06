#include<stdio.h>
#include<stdlib.h>

int operate(float x){
    float input,last;
    char sign[3];
    printf("Operator: ");
    scanf("\n%c", &sign);
    if (*sign == '+' ||*sign == '-' ||*sign == '*' ||*sign == '/' ){
        printf("Input Value: ");
        scanf("\n%f", &input);
        if (*sign == '+'){
            printf("Present Value is %.4f\n\n", x + input);
            x = x + input;
            operate(x);
        }
        else if (*sign == '-'){
            printf("Present Value is %.4f\n\n", x - input);
            x = x - input;
            operate(x);
        }
        else if (*sign == '*'){
            printf("Present Value is %.4f\n\n", x * input);
            x = x * input;
            operate(x);
        }
        else if (*sign == '/'){
            printf("Present Value is %.4f\n\n", x / input);
            x = x / input;
            operate(x);
        }
    }else{
        printf("\nFinish Calculation. Final Value is %.4f",x);
    }
}


int main(){
    float initial;
    printf("Initial Value: ");
    scanf("%f", &initial);
    printf("\n");
    operate(initial);
}

