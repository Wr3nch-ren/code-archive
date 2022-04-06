#include <stdio.h>
#include <stdlib.h>

int main()
{
	char n_str[10];
	printf("Enter n: ");
	fgets(n_str, 10, stdin);
	int n = atoi(n_str);
	int i, j, k, l;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
            if(j%2==0)
			    printf("x");
			else
				printf("-");
		}
		printf("\n");
	}
	for (k = n - 1; k >= 1; k--)
	{
		for (l = 1; l <= k; l++)
		{
			if(l%2==0)
			    printf("x");
			else
				printf("-");
		}
		printf("\n");
	}
	return 0;
}