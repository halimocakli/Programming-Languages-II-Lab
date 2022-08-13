#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int i;
	int totalNumber;
	int max = INT_MIN;
	int* data;

	printf("The total number must be between 1-100\n");
	printf("Insert the total number of elements:");
	scanf("%d", &totalNumber);

	data = (int*)calloc(totalNumber, sizeof(int));

	if (data == NULL)
	{
		printf("\nSTACKOVERFLOW\a");
		exit(0);
	}

	if (totalNumber >= 0 && totalNumber < 100)
	{
		for (i = 0; i < totalNumber; i++)
		{
			printf("Insert %d. Number: ", i + 1);
			scanf("%d", data + i);
		}

		for (i = 1; i < totalNumber; i++)
		{
			if (max < *(data + i))
			{
				max = *(data + i);
			}
		}

		printf("\n");
		printf("Maximum element of the integer literal = %d", max);
	}
	else
	{
		printf("\nThe total number must be between 1-100! Please try again.");
	}

	return 0;
}
