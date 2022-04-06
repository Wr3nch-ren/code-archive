#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    
    double plus,minus,multi;
    double fn;
    plus = pow(1+sqrt(5),n);
    minus = pow(1-sqrt(5),n);
    multi = pow(2,n)*sqrt(5);
    fn = (plus - minus) / multi;
    return fn;

}

void main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (
i=0;i<=n;i++
) {
        
printf("F(%d) = %d\n", i, fibo(i));

    }
}
