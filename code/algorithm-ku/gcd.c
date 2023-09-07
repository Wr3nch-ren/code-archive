#include <stdio.h>

int gcd(int u, int v)
{
    int t;
    while (u > 0) {
        if (u < v) {
            t = u; u = v; v = t;
        }
        u = u - v;
    }
    return v;
}

int main(){
    int u, v;
    scanf("%d %d", &u, &v);
    printf("%d", gcd(u, v));
}