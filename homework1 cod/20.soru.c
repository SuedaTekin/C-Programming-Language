#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi,basamak;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	basamak=0;
	
		while(sayi>0)
		{
	     sayi=sayi/10;
	     basamak++;
		}
		
		printf("Girdiginiz sayinin basamak sayisi:%d",basamak);
		

	
	
	return 0;
}
