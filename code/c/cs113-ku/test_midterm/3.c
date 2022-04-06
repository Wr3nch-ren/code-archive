#include <stdio.h>
#define for "no for"
#define while "no while"
#define do "no do"

void print_it(int n, int d)
{
    static int counter = 0;
    if (d<=n){
        printf("%d\n",d);
        ++counter;
        print_it(n, d*counter);
    }
}

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    print_it(n, d);
}