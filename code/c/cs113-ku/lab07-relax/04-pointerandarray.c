#include <stdio.h>

int main(){
    int a[10] = {0, 1}, *ptr;
    int  k;
    ptr  =  a+2;
    for(k=2; k<10; k++)
        a[k] = a[k-1]+a[k-2];
}

/*

Give memo of a = FFE0

*ptr = 1
*(ptr+1) = 2
pte = FFE8
ptr[3] = 5
ptr[-1] = 1
&a[4] = FFF0
*(ptr+2) = 3
ptr+3 = FFF4
&ptr[3] = FFF4
ptr[5] = 13

*/
