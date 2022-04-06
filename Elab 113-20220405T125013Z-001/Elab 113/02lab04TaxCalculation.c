#include <stdio.h>
#include <stdlib.h>
int main(){
    char income[10];
    
    fgets(income, 10, stdin);
    float salary = atof(income);

    if (salary < 0){
        printf("Error: Salary must be greater or equal to 0");
    }
    else {
        if (salary <= 300000.0){
           printf("%.2f",salary * 0.05);
        }
        else{
            printf("%.2f",(salary - 300000.0) * 0.10 + 15000);
        }
    }
}
