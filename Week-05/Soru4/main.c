#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* dizi;
	int boyut;

	printf("Dizi kac elemanli olsun: ");
	scanf("%d", &boyut);

	dizi = (int*)calloc(boyut, sizeof(int));

	for (int i = 0; i < boyut; i++)
	{
		printf("%d.Elemani giriniz: ", (i + 1));
		scanf("%d", (dizi + i));
	}

	puts("");
	dizi = (int*)realloc(dizi, (boyut + 5) * sizeof(int));
	printf("Artirilan hafiza...\n");

	for (int i = boyut; i < (boyut + 5); i++)
	{
		printf("%d.Elemani giriniz: ", (i + 1));
		scanf("%d", (dizi + i));
	}

	puts("");

	for (int i = 0; i < (boyut + 5); i++)
	{
		printf("%d\n", *(dizi + i));
	}

	return 0;
}
