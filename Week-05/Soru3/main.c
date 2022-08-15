#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* isim;
	char* soyisim;

	soyisim = (char*)malloc(6);
	isim = (char*)malloc(9);

	printf("Adinizi bosluk birakmadan giriniz: ");
	scanf("%s", isim);

	isim = (char*)realloc(isim, 20 * sizeof(char));

	printf("oyadinizi giriniz: ");
	scanf("%s", soyisim);

	strcat(isim, soyisim);

	printf("Ad_Soyad: %s", isim);
	return 0;
}
