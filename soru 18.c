#include <stdio.h>


int main()
{
	int n,i,c,a=1;

	printf("Floyd ucgeninin kac satir yazdiracagını girin\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(c=1;c<=i;c++)
		{
			printf("%d",a);
			a++;
		
		}
		printf("\n");	
	}

	return 0;
}
