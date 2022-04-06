#include <stdio.h>
#include <stdlib.h>

int converter(int n)
{    
    if (n < 2) { 
        printf("%d", n);
    } 
    else {
        converter(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    char number[10];
    fgets(number, 10, stdin);
    int num = atoi(number);
    converter(num);
}