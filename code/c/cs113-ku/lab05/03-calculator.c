#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Initial Value: ");
    float pvalue,cvalue;
    char ops[10];
    scanf("%f",&pvalue);
    while (1){
        printf("\nOperator: ");
        scanf("\n%s",ops);
        if(*ops=='+'){
            printf("Input Value: ");
            scanf("\n%f",&cvalue);
            pvalue += cvalue;
            printf("Present Value is %.4f\n",pvalue);
            continue;
        }
        if(*ops=='-'){
            printf("Input Value: ");
            scanf("\n%f",&cvalue);
            pvalue -= cvalue;
            printf("Present Value is %.4f\n",pvalue);
            continue;
        }
        if(*ops=='*'){
            printf("Input Value: ");
            scanf("\n%f",&cvalue);
            pvalue *= cvalue;
            printf("Present Value is %.4f\n",pvalue);
            continue;
        }
        if(*ops=='/'){
            printf("Input Value: ");
            scanf("\n%f",&cvalue);
            pvalue /= cvalue;
            printf("Present Value is %.4f\n",pvalue);
            continue;
        }
        else{
            printf("\nFinish Calculation. Final Value is %.4f",pvalue);
            break;
        }
    }
}