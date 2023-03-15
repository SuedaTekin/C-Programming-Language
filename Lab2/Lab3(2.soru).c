#include <stdio.h>
#include <stdlib.h>

int rek_decbin(int);
int main(){
int sayi,bin;
printf("decimal sayi giriniz:");
scanf("%d",&sayi);
bin=rek_decbin(sayi);
printf("%d= %d\n",sayi,bin);
return 0;
}
int rek_decbin(int N){
	if(N==0){
		return 0;
	}else{
		return (N%2+10*rek_decbin(N/2));
	}
}
