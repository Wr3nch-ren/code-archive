#include <stdio.h>
#include <string.h>
#define structSize 5
typedef struct{
    char id[100];
    int midterm;
    int final;
}studentGrade ;

int calculateGrade(studentGrade students){
    int total = students.midterm + students.final;
    if(total > 79){
        return 'A';
    }else if(total > 69){
        return 'B';
    }else if(total > 59){
        return 'C';
    }else if(total > 49){
        return 'D';
    }else
        return 'F';
}

int main(){
    char temp_id[100];
    studentGrade students[structSize];
    for(int i = 0 ; i < structSize ; i++){
        printf("Enter Student ID: ");
        scanf("%s",students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d",&students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d",&students[i].final);
    }
    for(int i = 0 ; i < structSize ; i++)
        printf("Student ID %s receives grade %c.\n",students[i].id,calculateGrade(students[i]));
}