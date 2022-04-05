#include <stdio.h>
#include "temp2.c"

/* AŞAĞIDAKİ KOD PARÇALARINI YAZARAK EKRAN ÇIKTILARINI YORUMLAYINIZ */

int gid = 287; /* Global int değişkeninin tanımlanması - Defining */

int main()
{
	printf("temp1.c dosyasına ait gid degiskeninin degeri = %d\n", gid);
	func();        /* temp2.c dosyasındaki func() fonksiyonuna çağrı */

	return 0;
}
