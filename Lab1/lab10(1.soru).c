#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i;
float x[8],toplam=0.0,ort;

for(i=0;i<8;i++)
{
	printf("%d.sayi:",i+1);
	scanf("%f",&x[i]);
	toplam += x[i];
}
printf("toplam= %.2f\n",toplam);
   ort=toplam/8;
   printf("Ortalama  =%f\n",ort);
	return 0;
}
