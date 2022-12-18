#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sum,x,a;
	int i,n;
	printf("x girin:");
	scanf("%f",&x);
	
	printf("terim sayisini giriniz:");
	scanf("%d",&n);
	
	sum=1,a=1;
	
	for(i=1;i<n;i++)
	{
		a=a*x/i;
		sum=sum+a;	
	}
	
	printf("\n toplam:%f\n",sum);
	return 0;
}
