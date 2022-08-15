#include <stdio.h>

int IsSame(const char* _firstSentence, const char* _secondSentence)
{
	while (*_firstSentence != '\0' || *_secondSentence != '\0')
	{
		if (*_firstSentence == *_secondSentence)
		{
			_firstSentence++;
			_secondSentence++;
		}

		else if ((*_firstSentence == '\0' && *_secondSentence != '\0') || (*_firstSentence != '\0' && *_secondSentence == '\0')
				 || *_firstSentence != *_secondSentence)
		{
			return 0;
		}
	}

	return 1;
}

int LengthCompare(const char* _firstSentence, const char* _secondSentence)
{
	int firstSentenceLength = 0;
	int secondSentenceLength = 0;

	while (*_firstSentence != '\0')
	{
		_firstSentence++;
		firstSentenceLength++;
	}

	while (*_secondSentence != '\0')
	{
		_secondSentence++;
		secondSentenceLength++;
	}

	if (firstSentenceLength > secondSentenceLength)
		return 1;
	else
		return 0;
}

int main()
{
	int equalityControl = -1;
	int lengthControl = -1;

	char firstSentence[50];
	char secondSentence[50];

	printf("Instert the first string: ");
	gets(firstSentence);

	printf("Insert the second string: ");
	gets(secondSentence);

	equalityControl = IsSame(firstSentence, secondSentence);

	if (equalityControl== 1)
	{
		printf("Equal Strings\n");
		return 0;
	}

	else if (equalityControl == 0)
	{
		lengthControl= LengthCompare(firstSentence, secondSentence);
	}

	if (lengthControl == 1)
	{
		printf("First sentence is longer than second sentence\n");
	}

	else if (lengthControl == 0)
	{
		printf("Second sentence is longer than first sentence\n");
	}

	return 0;
}
