#include<stdio.h>
void main()
{
    
float
 preGrade = 1.75;
    
int
 preCredit = 21;
    
int
 credit = 18;
    
float
 requiredGrade = 2.00;

    float preScore = preGrade*preCredit;
    float requiredScore = (requiredGrade*(credit+preCredit))-preScore;
    float targetGrade = requiredScore/credit;
    printf("The GPA this semester should be %.2f",targetGrade);

}