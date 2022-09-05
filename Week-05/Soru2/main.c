#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* isim;
(
	isim = (char*) malloc(16* sizeof(char)));

	strcpy(isim, "Halim Can Ocakli");
	printf("Ad: %s", isim);

	free(isim);
	return 0;
}
