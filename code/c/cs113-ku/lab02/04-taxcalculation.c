#include <stdio.h>
#include <stdlib.h>

int main(){
    char salary_str[20];
    fgets(salary_str,20,stdin);
    float salary = atof(salary_str);
    float first = 300000*5/100,total;
    if(salary<0){printf("Error: Salary must be greater or equal to 0");}
    else{
        if(salary<=300000){
            total = salary*5/100;
        }else if(salary>300000){
            total = ((salary-300000)*10/100)+first;
        }
        printf("%.2f",total);
    }
    return 0;
}