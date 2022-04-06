#include <stdio.h>
#include <stdlib.h>
void main()
{
    char hour_str[10], min_str[10];
    

    printf("Enter hour: ");
    fgets(hour_str, 10, stdin);

    printf("Enter minute: ");
    fgets(min_str, 10, stdin);

    int hour = atoi(hour_str);
    int min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
}