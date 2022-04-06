#include <stdio.h>
#include <stdlib.h>
int is_prime(int x){
    int boolean = 1; 
    for (int i = 2; i <= x - 1; i++){
        if (x % i == 0){
            return boolean = 0;
        }
    }
    return boolean;
}

int main() {
  char input[10];
  fgets(input, 10, stdin);

  int i, n;

  n = atoi(input);

  for (i = 2; i <= n; i++) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}