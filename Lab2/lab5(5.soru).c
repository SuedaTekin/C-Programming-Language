#include <stdio.h>
#include <stdlib.h>

void printVal(int *p)
{
	printf("%d\n", *p);
}
int main()
{
	int i=10, *p=&i;
	printVal(p);
}

