#include <stdio.h>
#include <stdlib.h>
/*
void main(){
	int age [10],i;
	printf("enter elements");
	
	for(i=0; i<10; i++)
		scanf("%d",age+i);
		
	for(i=0; i<10; i++)
		printf("%d",*(age+i));
		
} 

void main(void){
	int a,b,c,temp;
	int *d,*e,*f;
	d=&a,e=&b,f=&c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("\n swapten once: %d %d %d",*d,*e,*f);
	
	temp=*f;
	*f=*e;
	*e=*d;
	*d=temp;
	
	printf("\n swapten sonra: %d %d %d",*d,*e,*f);
}*/

void swap(int *p, int *q);

int main(){
	int a=3;
	int b=7;
	
	printf("%d%d\n",a,b);
	swap(&a,&b);
	printf("%d%d\n",a,b);
	return 0;
}

void swap(int *p,int *q){
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}







