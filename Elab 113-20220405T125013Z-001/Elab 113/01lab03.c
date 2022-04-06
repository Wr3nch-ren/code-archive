#include <stdio.h>
int main()
{
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;
    float GPA = (requiredGrade * (credit+preCredit)) - (preGrade * preCredit);

    printf("The GPA this semeter should be %.2f",GPA/credit);
}