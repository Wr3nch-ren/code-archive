#include<stdio.h>
int main() 
{
    int computer_time = 1678;
    int days = (computer_time/60) / 24;
    int hour = (computer_time - (days*60)*(24)) / 60;
    int minute = computer_time - (days*24)*(60) - (hour*60);
    printf("It is %d days %d hours and %d minutes.", days, hour, minute);
}