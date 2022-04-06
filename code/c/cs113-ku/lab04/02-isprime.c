#include <stdio.h>
#include <stdlib.h>

int is_prime(int m)
{
	int counter = 0;
	for (int j = 2; j <= m; j++)
	{
		if (m % j == 0)
		{
			counter += 1;
		}
		if (counter > 1)
		{
			break;
		}
	}
	if (counter > 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (i = 2; i <= n; i++) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}