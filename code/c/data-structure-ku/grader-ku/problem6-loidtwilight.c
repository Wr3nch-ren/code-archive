#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct __Patient__{
    int id;
    char name[20];
    int critical_level;
}Patient;

int main() {
    int n, i, j;
    scanf("%d", &n);
    if(n < 0) {
        printf("ErRor.!");
    }else if(n == 0){
        printf("Nothing to show");
    }else{
        Patient patient[n];
        for(i=0;i < n;i++){
            scanf("%d", &patient[i].id);
            scanf("%s", patient[i].name);
            scanf("%d", &patient[i].critical_level);
        }
        for(i = 0; i < n; i++){
            for(j = i + 1; j < n; j++){
                if(patient[i].id > patient[j].id){
                    Patient temp = patient[i];
                    patient[i] = patient[j];
                    patient[j] = temp;
                }
            }
        }
        printf("All patient:\n");
        for(i=0;i < n;i++){
            printf("  %02d %-10s %d\n", patient[i].id, patient[i].name, patient[i].critical_level);
        }
        printf("Critical:\n");
        int max = patient[0].critical_level;
        for(i=0;i < n;i++){
            if(patient[i].critical_level > max){
                max = patient[i].critical_level;
            }
        }
        for(i=0;i < n;i++){
            if(patient[i].critical_level == max){
                printf("  %02d %-10s %d\n", patient[i].id, patient[i].name, patient[i].critical_level);
            }
        }
        double sum = 0;
        for(i=0;i < n;i++){
            sum += patient[i].critical_level;
        }
        double average = sum/n;
        average = average;
        average = ceil(average * 10) / 10;
        printf("Average: %.1f", average);
        }
}