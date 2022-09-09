#include <stdio.h>

char* FindSubStr(const char* _mainString,  char* _searchingWord)
{
	char* tempSearchingWord = _searchingWord;

	while (*_mainString != '\0')
	{
		if (*_mainString == *_searchingWord)
		{

		}
	}
}

int main()
{
	char mainString[100];
	char searchingWord[50];
	char* found;

	printf("Insert the string: ");
	gets(mainString);

	printf("Insert the word that programme will search: ");
	gets(searchingWord);

	printf("Searching word: %s", searchingWord);

	return 0;
}
