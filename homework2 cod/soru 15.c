#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
     // Palindrom sayi bulma
     
     int sayi;
     printf("sayi giriniz:");
     scanf("%d",&sayi);
     int temp=sayi;
     
     int tersi=0;
     
     while(temp!=0)
    
	 {
     	tersi=tersi*10;
     	tersi+=temp%10;
     	temp=temp/10;
    }
	
	if(sayi==tersi)
	printf("%d sayisi palindrom sayidir",sayi);
	else 
	printf("%d sayisi palindrom sayisi degildir",sayi);
	
	return 0;
}
