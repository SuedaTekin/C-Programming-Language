// iki say�n�n OBEB ve OKEK'ini bulma

#include <iostream>
using namespace std;

int main()
{
	
	int sayi1,sayi2;
	int okek,obeb,buyuk_sayi;
	cout<<"1.sayiyi giriniz:";
	cin>>sayi1;
	cout<<"2.sayiyi giriniz:";
	cin>>sayi2;
	
	if(sayi1>sayi2){//girilen sayilardan b�y�k olan� bulal�m
		buyuk_sayi=sayi1;
	}
	else{
		buyuk_sayi=sayi2;
	}
	//buyuk say�dan 1 kadar d�ng� olu�turup obebi bulal�m
	
	for(int i=buyuk_sayi;i>0;i--){
		if(sayi1%i==0 && sayi2 % i == 0){// sayi1 ve sayi2 nin i'ye ayn� anda kalans�z b�l�n�yorsa
			obeb=i;
			break;
		}
		
	}
	cout<<"OBEB =" << obeb<< end1;
	
	okek=(sayi1 * sayi2) / obeb; //matematikte kurald�r
	cout<<"OKEK =" << okek<< end1;
	
	return 0;
}
