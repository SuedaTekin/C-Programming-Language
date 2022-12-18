#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//enbüyük sayiyi bulma
	
	
	int a,b,c;
	printf("bir sayi giriniz");
	scanf("%d",&a);
	printf("bir sayi giriniz");
	scanf("%d",&b);
	printf("bir sayi giriniz");
	scanf("%d",&c);
	
	
	if(a>b && a>c)
	
		printf("a en buyuk sayidir");
		
	else if (b>a && b>c)
	
	    printf("b en buyuk sayidir");
	    
	else printf("c en buyuk sayidir");
	
    return 0; 
}
