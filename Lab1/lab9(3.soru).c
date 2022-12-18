#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,ciftToplam=0,islem;
	
	printf("n degerini giriniz");
	scanf("%d",&n);
	
	int i;
	for(i=1000;i<2000;i++)
	{
		int sayi;
		printf("sayi:"); scanf("%d",&sayi);
		islem=(sayi%2==0);
		
	}
	printf("cift sayilarin toplami:%d\n"ciftToplam);
		
	return 0;
}
