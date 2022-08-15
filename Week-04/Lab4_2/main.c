#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* memoryAllocation;
	memoryAllocation = (char*)malloc(20 * sizeof(char));

	if (memoryAllocation == NULL)
	{
		printf("\nSTACKOVERFLOW\a");
		exit(0);;
	}
	else
	{
		strcpy(memoryAllocation, "Halim Can Ocaklı");
	}

	printf("Dynamically allocated memory content: %s", memoryAllocation);
	free(memoryAllocation);

	return 0;
}
