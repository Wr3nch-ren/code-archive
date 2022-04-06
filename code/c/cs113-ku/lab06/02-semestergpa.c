#include <stdio.h>

int main(){
    int i = 1;

    int subject,credit,gradenum;
    char grade[3];
    float allcredit = 0,allgrade = 0,average = 0;
    printf("Enter number of subject(s): ");
    scanf("%d",&subject);
    while(i<=subject){
        printf("Enter credit,grade for subject #%d: ",i);
        scanf("%d,%c",&credit,&grade);
            allcredit += credit;
        if(*grade=='A'||*grade=='a')
            allgrade += 4*credit;
        if(*grade=='B'||*grade=='b')
            allgrade += 3*credit;
        if(*grade=='C'||*grade=='c')
            allgrade += 2*credit;
        if(*grade=='D'||*grade=='d')
            allgrade += 1*credit;
        i++;
    }
    average = (allgrade)/(allcredit);
    printf("GPA = %.2f",average);
}