#include <stdio.h>

int main()
{
	char a;
	int b;
	float c;
	double d;

	char* aPtr;
	int* bPtr;
	float* cPtr;
	double* dPtr;

	aPtr = &a;
	bPtr = &b;
	cPtr = &c;
	dPtr = &d;

	printf("a boyutu: %d\n", sizeof(a));
	printf("aPtr boyutu: %d", sizeof(aPtr));

	puts("");

	printf("b boyutu: %d\n", sizeof(b));
	printf("bPtr boyutu: %d", sizeof(bPtr));

	puts("");

	printf("c boyutu: %d\n", sizeof(c));
	printf("cPtr boyutu: %d", sizeof(cPtr));

	puts("");

	printf("d boyutu: %d\n", sizeof(d));
	printf("dPtr boyutu: %d", sizeof(dPtr));

	getchar();
	return 0;
}
