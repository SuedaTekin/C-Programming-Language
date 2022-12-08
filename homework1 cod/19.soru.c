#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i,j;
	int carpim;
	
	for(i=1; i<=10; i++){
		
		for(j=1; j<=10; j++){
		carpim=i*j;
		printf("%d X %d = %d\t",j,i,carpim);
		
		}
		printf("\n");
		
	}
	
	return 0;
}
