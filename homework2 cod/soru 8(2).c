#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int n,i,a,b,total=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=2; i<=n; i++){
	
	b=1;
	
	for(a=2; a<=sqrt(i); a++){
	
	if(i % a == 0){
		
		b=0;
		break;
		
	}
}
	if(b)  {
		total += i;
		
	}
	
}
	printf(" sum:%d", total);	
		
	return 0;
}
	
