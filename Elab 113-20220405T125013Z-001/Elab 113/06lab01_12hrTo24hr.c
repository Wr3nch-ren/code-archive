#include <stdio.h>
#include <ctype.h>

int main(){
    int hour, minute, hh = 0;
    char time[5];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d%s",&hour, &minute, time);
    if ((time[0] == 'a' & time[1] == 'm') || (time[0] == 'A' & time[1] == 'M')){
        if (hour < 12)
            hh = hour;
    }
    else{
        if (hour == 12){
            hh = hour;
        }
        else if (hour < 12){
            hh = hour + 12;
        }
    }


    printf("Equivalent 24-hour time: %02d:%02d", hh, minute);
}