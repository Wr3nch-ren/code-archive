#include<stdio.h>
void main() {
   int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int day,hours,minutes,dayleft,hoursleft;
    day = (computer_time/60)/24;
    dayleft = computer_time%(60*24);
    hours = dayleft/60;
    hoursleft = dayleft%60;
    minutes = hoursleft;
    printf("It is %d days %d hours and %d minutes.",day,hours,minutes);

}