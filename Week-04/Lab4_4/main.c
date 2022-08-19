#include <stdio.h>

int foo(int x, int* py, int** ppz)
{

	**ppz += 1;
	printf("%d %d %d\n", x, *py, **ppz);
	x = *py * **ppz;
	printf("%d %d %d\n", x, *py, **ppz);
	*py *= 2;
	printf("%d %d %d\n", x, *py, **ppz);
	x *= *py + 3;
	printf("%d %d %d\n", x, *py, **ppz);

	return (x + *py + **ppz);
}

void main()
{
	int c;
	int* b;
	int** a;

	c = 4;
	b = &c;
	a = &b;

	printf("%d", foo(c, b, a));
	printf("\n%d", c);
}


