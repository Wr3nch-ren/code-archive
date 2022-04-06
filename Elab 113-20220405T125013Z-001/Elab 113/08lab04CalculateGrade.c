#include <stdio.h>
#include <string.h>

typedef struct{
    char id[11];
    int mid;
    int final;
    char grade;
}point;

void calculateGrade(point student){
    int total = student.mid + student.final;

    if (total >= 80){
        printf("Student ID %s receives grade A.\n", student.id);
    }
    else if (total >= 70){
        printf("Student ID %s receives grade B.\n", student.id);
    }
    else if (total >= 60){
        printf("Student ID %s receives grade C.\n", student.id);
    }
    else if(total >= 50){
        printf("Student ID %s receives grade D.\n", student.id);
    }
    else{
        printf("Student ID %s receives grade F.\n", student.id);
    }
}

int main(){
    point student[5];

    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%s\n", student[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d\n", &student[i].mid);
        printf("Enter Student Final: ");
        scanf("%d\n", &student[i].final);
    }

    for (int i = 0; i < 5; i++){
        calculateGrade(student[i]);
    }
}