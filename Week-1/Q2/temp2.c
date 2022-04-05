/* temp2.c */
#include <stdio.h>

extern int gid; // Global int değişken bildirimi - Declaring

void func(void)
{
	printf("temp2.c dosyasina icerisindeki gid degiskeninin degeri = %d", gid);
}