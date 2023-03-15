#include <stdio.h>
#include <stdlib.h>

float rek_ortalama(int A[],int boy);
int main(){
	int N,i;
	printf("Kac adet sayi uretilecek:");
	scanf("%d",&N);
	int dizi[N];
	for(i=0;i<N;i++){
		dizi[i]=rand() % 100;
		printf("%d",dizi[i]);
	}
	printf("\nDizi Ortalamasi=%.2f\n",rek_ortalama(dizi,N-1)/N);
	return 0;
}
float rek_ortalama(int A[],int boy){
	int sonuc=0;
	if(boy<=0){
		sonuc=A[boy];
	}else{
		sonuc=A[boy]+rek_ortalama(A,boy-1);
	}
	return sonuc;
}
