#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

void hesapla(float yaricap);
int main(){
	float yaricap;
	printf("Yaricap degerini giriniz:");
	scanf("%f",&yaricap);
	hesapla(yaricap);
	return 0;
}

void hesapla(float yaricap){
	float alan;
	alan=pi*yaricap*yaricap;
	printf("Dairenin Alani=%.2f\n",alan);
}

