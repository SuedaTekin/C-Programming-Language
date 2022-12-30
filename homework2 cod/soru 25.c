#include <stdio.h>


int main() {
	int rows,yaz=1,i,j,space;
	
	printf("satir sayisini giriniz:");
	scanf("%d",&rows);
	
	for( i=0;i<rows;i++) {
		
		for( space=1; space <=rows-i; space++)
			printf(" ");
			
		for( j=0; j<=i; j++){
			if (j==0 || i==0)
			   yaz=1;
			else 
				yaz=yaz*(i-j+1)/j;
			printf("%4d",yaz);
			
		}
		
		printf("\n");
	
	}
	
	
	return 0;
}
