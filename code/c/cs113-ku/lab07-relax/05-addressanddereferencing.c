#include <stdio.h>

int main(){
    int i, j=12;
    int *pi, *pj=&j;
    *pj = j+3;
    i = *pj+7;
    pi = pj;
    *pi = i+j;
}

/*
Given memo i = FF04 memo j = FF00

&i = FF04
&j = FF00
pj = FF00
*pj = 37
i = 22
pi = FF00
*pi = 37
pi+2 = FF08
*pi+2 = FF08
*pi+2 = 39
*pi+*pj = 74
*/