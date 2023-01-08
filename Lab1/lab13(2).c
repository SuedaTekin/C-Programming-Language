#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float ortalama_hesaplama(void) {
	
	int a,b,c,d,e;
	printf("5 tane sayi giriniz.");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

	return (float)(a+b+c+d+e)/5;
}
int  main(){
float  x;
	x=ortalama_hesaplama();
	printf("sonuc%f",x);
	return 0;
	
	
	
	
	
}
