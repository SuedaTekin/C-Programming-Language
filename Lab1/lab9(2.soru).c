#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//faktöriyel hesaplama
	
	int n;
	int fact;
	
	printf("n sayisini giriniz");
	scanf("%d",&n);
	
    fact=1;
	
    while (n  !=0) {
    	fact=n*fact;
    	n=n-1;
    	
	}	
	printf("%d",fact);
		
	
	return 0;
}
