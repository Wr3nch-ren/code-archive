#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STUDENT_DATA 5

typedef struct {
    char firstname[30];
    int scores;
}Student;

int main(){
    char studentname[30];
    int studentscores;
    float avg = 0;
    Student s[STUDENT_DATA];
    for(int i = 0; i < STUDENT_DATA; i++){
        printf("Student %d: ",i+1);
        scanf("\n%s %d",studentname,&studentscores);
        strcpy(s[i].firstname,studentname);
        avg += studentscores;
        s[i].scores = studentscores; 
    }
    avg = avg / 5;
    printf("Average = %.2f\n",avg);
    printf("Students that have more scores than average is: ");
    for(int j = 0; j < 5; j++){
        if(s[j].scores > avg){
            printf("%s ",s[j].firstname);
        }
    }
    return 0;
}