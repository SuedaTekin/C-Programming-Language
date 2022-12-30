// iki sayýnýn OBEB ve OKEK'ini bulma

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
	
	if(sayi1>sayi2){//girilen sayilardan büyük olaný bulalým
		buyuk_sayi=sayi1;
	}
	else{
		buyuk_sayi=sayi2;
	}
	//buyuk sayýdan 1 kadar döngü oluþturup obebi bulalým
	
	for(int i=buyuk_sayi;i>0;i--){
		if(sayi1%i==0 && sayi2 % i == 0){// sayi1 ve sayi2 nin i'ye ayný anda kalansýz bölünüyorsa
			obeb=i;
			break;
		}
		
	}
	cout<<"OBEB =" << obeb<< end1;
	
	okek=(sayi1 * sayi2) / obeb; //matematikte kuraldýr
	cout<<"OKEK =" << okek<< end1;
	
	return 0;
}
