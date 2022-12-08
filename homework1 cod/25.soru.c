#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,k;
	printf("a sayisini giriniz:");
	scanf("%d",&a);
	
	printf("b sayisini giriniz:");
	scanf("%d",&b);
	
	k=a%b;
	while(k!=0){
		a=b;
		b=k;
		k=a%b;
		
	}	
	printf("sayilarimizin ebobu=%d",b);
	

	return 0;
}
