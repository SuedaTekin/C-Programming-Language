#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,cnt1=0,cnt2=0,cnt3=0;
	char str1[]="adfslkj34 34lkj343 34lk";
	for(i=0;str1[i]!='\0';i++){
	
	if(str1[i]==32)
	cnt1++;
	
	
	if(str1[i]==97)
	
	cnt2++;
    
	if(str1[i]=='3' || str1[i]=='4')
		cnt3++;
		

	
}
	printf("white space numbers--->%d\n",cnt1);
	printf("sesli harf sayisi----->%d\n",cnt2);
	printf("rakam sayisi---------->%d\n",cnt3);
	
	
	
	return 0;
}
