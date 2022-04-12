#include <stdio.h>

void Func();
void FuncStatic();

int main()
{
	Func();
	printf("---------\n");
	FuncStatic();

	printf("\n");

	Func();
	printf("---------\n");
	FuncStatic();

	return 0;
}

void Func()
{
	int id = 1;

	printf("Func() - id degisken degeri: %d\n", id);

	id = id + 21;

	printf("Func() - id degisken degeri: %d\n", id);
}

void FuncStatic()
{
	static int id = 1;    /* Yalnızca fonksiyonun ilk çağrısında çalışır */

	printf("FuncStatic() - id degisken degeri: %d\n", id);

	id = id + 21;

	printf("FuncStatic() - id degisken degeri: %d\n", id);
}