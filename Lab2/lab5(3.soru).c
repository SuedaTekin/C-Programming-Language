#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun2(int **p)
{
	int b=8;
	*p=&b;
	printf("%d",**p);
}
int main()
{
	int a=10, *p=&a;
	fun2(&p);
	printf("%d",*p);
}
