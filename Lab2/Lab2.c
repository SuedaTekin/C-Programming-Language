#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fonk(void);

int gid=287;

int main(void)
{
	printf("denem1.c gid deðiþken deðeri: %d\n",gid);
	
	fonk();
	
	return 0;
}

extern int gid;

void fonk(void)
{
	printf("deneme2.c gid deðiþken deðeri:%d",gid);
}
