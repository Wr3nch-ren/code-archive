#include <stdio.h>

typedef enum {tue = 1, wed, thu, fri, sat, sun, mon} DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
    int dayofmonth[] = {31,28,31,30,31,30,31,31,30,31};
    int monthpass = 0;
    int totalday = 0;
    while(monthpass < month){
        if (monthpass < month-1)
        {
            totalday += dayofmonth[monthpass];
        }else{
            totalday += day;
        }
        monthpass++;
    }
    while(totalday > 7){
        totalday-=7;
    }
    return totalday;

}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case sun: printf("Sunday.\n"); break;
		case mon: printf("Monday.\n"); break;
		case tue: printf("Tuesday.\n"); break;
		case wed: printf("Wednesday.\n"); break;
		case thu: printf("Thursday.\n"); break;
		case fri: printf("Friday.\n"); break;
		case sat: printf("Saturday.\n"); break;
	}
}