#include <stdio.h>
#include <time.h>

/* register int ile deklere edilmiş değişkenler ve int ile deklere edilmiş değişkenlerin kullanımı sonucu oraya çıkan
 * çalışma hızları arasındaki farkı inceleyeceğiz. */

void IntegerTypeVariable();
void RegisterIntTypeVariable();

int main()
{
	printf("RUNTIME OF LOOP WHICH USES INTEGER TYPE VARIABLES\n");
	printf("-------------------------------------------------\n");
	IntegerTypeVariable();

	printf("\n\n----------------------------------------------------------\n");
	printf("----------------------------------------------------------\n\n");

	printf("RUNTIME OF LOOP WHICH USES REGISTER INTEGER TYPE VARIABLES\n");
	printf("----------------------------------------------------------\n");
	RegisterIntTypeVariable();

	return 0;
}

void IntegerTypeVariable()
{
	clock_t start_t;
	clock_t end_t;

	int id_1;
	int id_2;

	start_t = clock();

	for (id_1 = 0; id_1 < 2000000; id_1++)
	{
		for (id_2 = 0; id_2 < 100; id_2++)
		{

		}
	}

	end_t = clock();

	printf("Value of start_t: %lu\n", start_t);
	printf("Value of end_t: %lu\n", end_t);
	printf("Loop runtime: %.3f seconds", (double)(end_t - start_t) / CLOCKS_PER_SEC);
}

void RegisterIntTypeVariable()
{
	clock_t start_t;
	clock_t end_t;

	register int id_1;
	register int id_2;

	start_t = clock();

	for (id_1 = 0; id_1 < 2000000; id_1++)
	{
		for (id_2 = 0; id_2 < 100; id_2++)
		{

		}
	}

	end_t = clock();

	printf("Value of start_t: %lu\n", start_t);
	printf("Value of end_t: %lu\n", end_t);
	printf("Loop runtime: %.3f seconds", (double)(end_t - start_t) / CLOCKS_PER_SEC);
}