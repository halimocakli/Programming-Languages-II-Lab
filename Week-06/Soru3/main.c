#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintFrequency(int _frequency[])
{
	for (int i = 0; i < 26; i++)
	{
		if (_frequency[i] != 0)
		{
			printf("%c - %d\n", i + 'a', _frequency[i]);
		}
	}
}

void FindFrequency(const char* _string)
{
	int i = 0;
	int frequency[26] = {0};

	while (_string[i] != '\0')
	{
		frequency[_string[i] - 'a']++;
		i++;
	}

	PrintFrequency(frequency);
}

int main()
{
	int size;
	char* string;

	printf("Bellekten ayirmak istediginiz boyutu giriniz: ");
	scanf("%d", &size);

	string = (char*)malloc(size * sizeof(char));

	printf("String giriniz[Bosluk birakmadan]: ");
	scanf("%s", string);

	FindFrequency(string);

	return 0;
}
