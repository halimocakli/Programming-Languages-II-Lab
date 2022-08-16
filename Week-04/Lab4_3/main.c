#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* memoryAllocation;

	memoryAllocation = (char*)malloc(10 * sizeof(char));
	if (memoryAllocation == NULL)
	{
		printf("\nSTACKOVERFLOW\a");
		exit(0);
	}
	else
	{
		strcpy(memoryAllocation, "Halim Can");
	}
	printf("Dynamically allocated memory content : %s", memoryAllocation);

	printf("\n");

	memoryAllocation = (char*)realloc(memoryAllocation, 17 * sizeof(char));
	if (memoryAllocation == NULL)
	{
		printf("\nSTACKOVERFLOW\a");
		exit(0);
	}
	else
	{
		strcpy(memoryAllocation, "Halim Can Ocaklı");
	}
	printf("Dynamically allocated memory content : %s", memoryAllocation);

	free(memoryAllocation);
	return 0;
}
