#include <stdio.h>

int main()
{
  int amount = 98;  int b50 = amount / 50;
  int left50 = amount - b50*50;
  int b20 = left50 / 20;
  int left20 = left50 - b20*20;
  int b5 = left20 / 5;
  int left5 = left20 - b5*5;
  int b1 = left5;
  
  printf("1: %d\n", b1);
  printf("5: %d\n", b5);
  printf("20: %d\n", b20);
  printf("50: %d\n", b50);
}