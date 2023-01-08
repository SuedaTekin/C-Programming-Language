#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int kare_alan(void){
	int a;

	printf("a giriniz:");
	scanf("%d",&a);
	
	return a*a;
}
int main (){
	int x;
	x=kare_alan();
	printf("%d",x);
	return 0;
}

	

