#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int *ptr, a=10;
	ptr=&a;
	*ptr +=1;
	printf("%d %d\n",*ptr,a);
	
	return 0;
}
