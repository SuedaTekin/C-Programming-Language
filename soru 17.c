
#include<math.h>
int main()
{ 

     double ort=0,sayi=0;
     int n=0;
     do
     {
     		cout<<"Bir sayi giriniz.cikmak icin 0 giriniz: ";
     		cin>>sayi;
     		if(sayi!=0)
     		{
     			ort=ort+1.0/sayi;
     			n++;
			}
     	
	 }while(sayi!=0);
	 ort=((double)n)/ ort;
	 cout<<"Harmonik Ortalama =" << ort;
	 

}
return 0;

