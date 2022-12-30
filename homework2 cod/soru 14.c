#include <stdio.h>


void main() {
	int i=1,fact,j,sum,n,a,tmp;
	long int number;
	
	printf("\n Find strong numbers 1 to \n");
	scanf("\n%ld",&number);
	
	printf("\ All strong numbers between 1 to %ld are:\n",number);
	
	for(j=1; j<=number;j++)
	{
		tmp=j;
		sum=0;
		
		while (tmp != 0) {
			a = j%10;
			tmp= tmp/10;
			fact =1;
			
			while(i<=a) {
				fact = fact*a;
				a--;
			}
			sum = sum+ fact;
		}
		if (j== sum)
	printf("\n%d\n",j);	
		
	}
	
	return 0;
}
