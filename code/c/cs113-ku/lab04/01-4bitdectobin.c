#include <stdio.h>
#include <stdlib.h>



int main()
{
    char num_str[3];
    int num, index, i;
    int bin[4];

    fgets(num_str,3,stdin);
    num = atoi(num_str);

    index = 4 - 1;

    printf("Binary number of %d is ", num);

    while(index >= 0)
    {
        bin[index] = num & 1;
        index--;
        num >>= 1;
    }

    for(i=0; i<4; i++)
    {
        printf("%d", bin[i]);
    }
    printf(".");

    return 0;
}
