#include <stdio.h>
#include <stdlib.h>

int main()
{
	int counter = 0;
	float goal, deposit = 0, current = 0;
	char goal_str[20], deposit_str[20], counter_str[5];
	printf("Enter your goal amount: ");
	fgets(goal_str, 20, stdin);
	goal = atof(goal_str);
	while (1)
	{
		if (goal <= 0)
		{
			break;
		}
		printf("Enter money collected today: ");
		fgets(deposit_str, 20, stdin);
		deposit = atof(deposit_str);
		goal -= deposit;
		current += deposit;
		counter += 1;
		if (goal <= 0)
		{
			break;
		}
		printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", counter, current, goal);
	}
	if (counter == 1)
	{
		printf("Congratulations! You take %d day to reach your goal.", counter, counter_str);
	}
	else
	{
	printf("Congratulations! You take %d days to reach your goal.", counter, counter_str);
	}
	return 0;
}