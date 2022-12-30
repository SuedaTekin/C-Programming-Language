#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	int sayi,i,j,asal,a;
	
	for(i=2;i<=sayi;i++)
	{
		asal=1;
		for(j=1;j<=sayi;j++)
		{
			sayi=i%j;
			if(sayi==0)
			{asal=0;	
			}
			if(asal==1)
			{
				if(a!=i)
				{a=i;
			         printf("%d\n",i);
				}
			
			}
		}
    }
	
	return 0;
}
