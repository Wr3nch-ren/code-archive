#include <stdio.h>

int main(){
    int round;
    double sumgrade = 0.0, sumcredit = 0.0;
    
    printf("Enter number of subject(s): ");
    scanf("%d", &round);
    
    for (int i = 1; i <= round; i++){
        int credit; char grade[2];
        printf("Enter credit,grade for subject #%d: ",i);
        scanf("\n%d,%s",&credit, grade);
        if (*grade == 'a' || *grade == 'A'){
            sumgrade += credit * 4.0;
        } 
        else if (*grade == 'b' || *grade == 'B'){
            sumgrade += credit * 3.0;
        } 
        else if (*grade == 'c' || *grade == 'C'){
            sumgrade += credit * 2.0;
        } 
        else if (*grade == 'd' || *grade == 'D'){
            sumgrade += credit * 1.0;
        } 
        else{
            sumgrade += credit * 0.0;
        } 
                
        sumcredit += credit;
    }
    printf("GPA = %.2f", sumgrade/sumcredit);
}