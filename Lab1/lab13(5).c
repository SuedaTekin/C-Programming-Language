#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,sayac;
	char cumle[100];
	printf("Bir cumle giriniz:");
	gets(cumle);
	
	if(strlen(cumle)>100) {
		printf("cok uzun cumle girdiniz!.");
		
	}
	else
	{
		int sayac=1;
		for(i=0, i<strlen(cumle); i++)
		{
			printf ("%c",cumle[i]);
			//harf harf yazdýrýr.
			if(cumle[i]==' ')
			{
				printf("\n");
				sayac++;
			}
		}
		printf("\n Girilen cumlede %d adet kelime vardir",sayac);	
	}	
}
