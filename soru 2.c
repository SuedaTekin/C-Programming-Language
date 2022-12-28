#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	float a,b,c;
 	float del;
 	float x1,x2;
 	float x;
 	
 	printf("a,b,c degerlerini giriniz");
 	scanf("%f%f%f",&a,&b,&c);
 	
 	del=b*b-4*a*c;
 	
 	if(del<0)
 	printf("kok yok");
 	else if (del>0)
 	{
 		x1=(-b -(sqrt(del)) )/ 2*a   ;
 		x2=(-b +(sqrt(del)) )/ 2*a;
 		
 		printf("iki ayri kok var:\n");
 		printf("x1=%f",x1);
 		printf("x2=%f",x2);
 			
	 }
	else
	{
		x=-b/2*a;
		printf("tek kok var:\n");
		printf("x=%f",x);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
