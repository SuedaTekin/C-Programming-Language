#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//enbuyuk,enkucuk sayýyý bulma
	
int a,b,c;
int buyuk,kucuk;

printf("3 adet sayi giriniz:"); scanf("%d%d%d, &a,&b,&c");

buyuk=(a>b && a>c) ? a: (b>a && b>c) ? b:c;
kucuk=(a<b && a<c) ? a: (b<a && b<c) ? b:c;

printf("buyuk sayi:%d\n",buyuk);
printf("kucuk sayi:%d\n",kucuk);

	
	return 0;
}
