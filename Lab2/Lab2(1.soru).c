#include <stdio.h>
#include <stdlib.h>

/* dizi elemanlarýnýn toplamýný rec.function*/

int enbuyuk_bul(int[],int,int);

int main() { //0 1 2 3 4
	int dizi[]={23,11,4,45,8};
	int max=dizi[0];//diziden ilk okunan indis içerisindeki deðer..23
	max=enbuyuk_bul(dizi,4,max);
	printf("max=%d\n",max);
	return 0;
}

int enbuyuk_bul(int x[],int y,int z){
	if(y<0)
		return z;    ///z=23
	if(x[y]>z)       //dizi[3]=45>23
	    z=x[y];      ///max=dizi[3];
	return enbuyuk_bul(x,y-1,z); 
}
