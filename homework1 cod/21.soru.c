#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;
	int ilkBas,sonBas ;
	
	printf("n basamakli sayi giriniz:");
	scanf("%d",&sayi);
	
	sonBas=sayi%10 ;
	sayi=sayi/10 ;
	
	ilkBas=sayi%10 ;
	sayi=sayi/10 ;
	
	
	printf("%d",sonBas);
	printf("%d",ilkBas);
	

	
	
	
	
	
	
	
	return 0;
}
