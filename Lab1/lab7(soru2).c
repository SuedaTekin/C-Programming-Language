#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a,b,c;
	
	printf("Enter a number ");
	scanf("%d", &a);
	printf("Enter a number ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("a:%d  b:%d",a,b );
	
	return 0;
}
