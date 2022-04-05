#include <stdio.h>

/* AŞAĞIDAKİ KOD PARÇASININ EKRAN ÇIKTISI NASIL OLMALIDIR? */

int x = 5;

int main()
{
	{
		int x = 10;
		int y = 20;
		{
			printf("x = %d\ny = %d\n\n", x, y);
			{
				int y = 40;

				x++;
				y++;

				printf("x = %d\ny = %d\n\n", x, y);
			}
			printf("x = %d\ny = %d\n\n", x, y);
		}
	}
	printf("x = %d\n", x);
	return 0;
}
