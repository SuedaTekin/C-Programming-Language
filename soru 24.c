#include <stdio.h>

int main()
{
	
	int sayi,basamak,toplam=0;
	int ikininKati=1;
	
	printf("bir sayi giriniz (ikilik sistem):");
	scanf("%d",&sayi);
	
	while(sayi>0)
	{
		basamak=sayi %10;
		toplam=toplam+ikininKati*basamak;
		sayi=sayi/10;
		ikininKati=ikininKati*2;
	}
	printf("Onluk sistemde karsiligi=%d",toplam);
	
	return 0;
}
