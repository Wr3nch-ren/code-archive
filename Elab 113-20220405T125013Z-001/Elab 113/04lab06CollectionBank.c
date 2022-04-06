#include <stdio.h>
#include <stdlib.h>

int main(){
    char goalstr[20];
    printf("Enter your goal amount: ");
    fgets(goalstr, 20, stdin);
    float goal = atof(goalstr), total = 0;
    float need = goal;
    int day = 0;

    while (need > 0){
        char collectstr[10];
        printf("Enter money collected today: ");
        fgets(collectstr, 10, stdin);
        float collect = atof(collectstr);
        need -= collect;
        total += collect;
        day++;
        
        if (need > 0){
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, total, need);
        }
        else if (day == 1 || need == 0){
            printf("Congratulations! You take %d day to reach your goal.", day);
        }
        else{
            printf("Congratulations! You take %d days to reach your goal.", day);
        }
    }
}