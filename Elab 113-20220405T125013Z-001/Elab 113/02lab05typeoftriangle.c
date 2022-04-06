#include <stdio.h>
#include <stdlib.h>
int main(){
    char a[5];
    char b[5];
    char c[5];

    printf("Enter length of side A: ");
    fgets(a, 5, stdin);
    int A = atoi(a);
    printf("Enter length of side B: ");
    fgets(b, 5, stdin);
    int B = atoi(b);
    printf("Enter length of side C: ");
    fgets(c, 5, stdin);
    int C = atoi(c);

    if (A <= 0 || B <= 0 || C <= 0 || A+B <= C || A+C <= B || B+C <= A){
        printf("Triangle type is invalid.");
    }
    else if (A == B && A == C && B == C){
        printf("Triangle type is equilateral.");
    }
    else if (A == B || A == C || B == C){
        printf("Triangle type is isosceles.");
    }
    else{
        printf("Triangle type is scalene.");
    }

}