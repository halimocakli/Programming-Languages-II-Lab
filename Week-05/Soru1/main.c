#include <stdio.h>
#include <stdlib.h>

int main()
{
	int elemanSayisi;
	int enBuyuk;
	int* iPtr;

	printf("Eleman sayisini giriniz: ");
	scanf("%d", &elemanSayisi);

	iPtr = (int*)calloc(elemanSayisi, sizeof(int));

	puts("");

	for (int i = 0; i < elemanSayisi; i++)
	{
		printf("%d.Elemani Giriniz: ", (i + 1));
		scanf("%d", (iPtr + i));
	}

	enBuyuk = *iPtr;

	for (int i = 0; i <elemanSayisi ; i++)
	{
		if (*(iPtr + i) > enBuyuk)
		{
			enBuyuk = *(iPtr + i);
		}
	}

	puts("");

	printf("En buyuk eleman: %d", enBuyuk);
}
