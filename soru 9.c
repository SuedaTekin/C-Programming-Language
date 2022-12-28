#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	int temp=sayi;
	
	int n;
	while(temp!=0)
    {
		temp=temp%10;
		n++;
		temp=temp/10;
	
	}	
	
	int temp2=sayi;
	int sonuc=0;
	
	while (temp2!=0)
	{
		int gecici=temp2%10;
		
		sonuc+= pow(gecici,3);
		temp2=temp2/10;
		
	}
	if(sayi==sonuc)
	printf("%d sayisi armonstrong sayidir",sayi);
	else
	printf("%d sayisi armonstrong sayi degildir",sayi);
	
	
	return 0;
}
