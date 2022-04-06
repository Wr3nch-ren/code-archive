#include <stdio.h>
#define anyNumber 123456789
int main()
{
  int amount = anyNumber;

    int fifties = amount/50;
    int fiftiesleft = amount%50;
    int twenties = fiftiesleft/20;
    int twentiesleft = fiftiesleft%20;
    int fives = twentiesleft/5;
    int ones = twentiesleft%5;
    printf("1: %d\n", ones);
    printf("5: %d\n", fives);
    printf("20: %d\n", twenties);
    printf("50: %d\n", fifties);

}