#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int random;


	for (int i = 0; i < 10; i++)
	{
		random = 100 + rand() % 900;
		printf("%d\n", random);
	}
	return 0;
}
