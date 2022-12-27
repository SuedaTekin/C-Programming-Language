#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int x[10];
	int kare;
	int i=0;
	
	while (i<10){
		
		printf("Bir sayi giriniz :");
		scanf("%d",&x[i]);
		if (x[i]==-1)
			break;
		kare=x[i]*x[i];
		printf("%d\n",kare);
		i++;
		
	}

	return 0;
}
