#include <stdio.h>

int main(){
    int hrs = 0,min = 0;
    char time[3];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %s",&hrs,&min,time);
    if(hrs == 12)
        hrs = 0;
    if(time[0]=='p'||time[0]=='P')
        hrs += 12;
    printf("Equivalent 24-hour time: %02d:%02d",hrs,min);
}