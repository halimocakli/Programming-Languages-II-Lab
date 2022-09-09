#include <stdio.h>
#include <stdlib.h>

void ReadStringDynamically(char* inputString, int size)
{
	int c;

	inputString = (char*)calloc(1, sizeof(char));
	*(inputString + 0) = '\0';

	printf("String giriniz: ");

	for (int i = 0; i < size && (c = getchar()) != '\n' && c != EOF; i++)
	{
		inputString = realloc(inputString, (i+2) * sizeof(char));
		*(inputString + i) = (char) c;
		*(inputString + i + 1) = '\0';
	}

	int count = 0;

	for (int i = 0; *(inputString + i) != '\0'; i++)
	{
		if (inputString[i] == ' ' && inputString[i+1] != ' ')
			count++;
	}

	printf("\nVerilen stringteki kelime sayisi: %d\n", count + 1);
}

int main()
{
	char* string = NULL;
	int size = 20;

	//printf("Bellekten ayirmak istediginiz boyutu giriniz: ");
	//scanf("%d", &size);

	ReadStringDynamically(string, size);

	return 0;
}
