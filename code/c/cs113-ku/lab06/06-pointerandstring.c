#include<stdio.h>
void main()
{
    char item[25] ="Computer Programming";
    char *a1=item, *a2;
    printf("%s\n",a1);
    a2 =a1 + 5;
    printf("%s\n",a2);
    a2 =a2 + 3;
    printf("%s\n",a2);
}