#include <stdio.h>

main() 
{
	int bellek[10];
	int i;
	for (i=1;i<=10;i++)
	{
		printf("%d.Sayiyi giriniz :",i);
		scanf("%d",&bellek[i]);
		
	}
	for(i=10;i>0;i--)
	{
		printf("%d.Sayi :%d\n",i,bellek[i]);
	}
	
}
