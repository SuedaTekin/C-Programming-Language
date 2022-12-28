#include <stdio.h>
#include <math.h>

int main() {
	
 int sayi,sayac,c,toplam=0;
 printf("1'den girilen sayiya kadar olan asal sayilarin toplami:\n");
 printf("\nBir sayi giriniz:");
 scanf("%d",&sayi);
 
 for (sayac=1;sayac<=sayi;sayac++){
 	
 	c=2;
 
 	while(c<=sayac){
 	
	 	if(sayac%c==0){
 			
			 if(sayac==c){
 				toplam +=sayac;    break;
			 }
			 else{
			 	break;
			 }
		 }
		 else{
		 	c++;
		 }	
	 }
 	
 }

	return 0;
}
