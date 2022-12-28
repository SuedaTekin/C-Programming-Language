#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,x,faktoriyel,terimSayisi;
	double toplam=1;
	
	printf("S=1+x+x^2/2!+x^3/3!+...\n");
	printf("\nx degerini giriniz:"); scanf("%d",&x);
	printf("\nTerim sayisini giriniz:");scanf("%d",&terimSayisi);
	
	for(i=1; i<terimSayisi-1; i++){
		
		j=1,faktoriyel=1;
		while(j<=1){
			faktoriyel=faktoriyel*j;
			j++;
		}
		toplam += pow(x,i) / faktoriyel;
	}
	
	printf("\nToplam: %.3lf",toplam);
	
	return 0;
}
