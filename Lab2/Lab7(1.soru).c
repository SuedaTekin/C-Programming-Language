#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort (char** kelime,int n){
	int i,j;
	for(i=0; i<n-1; j++)
		for(j=0; j<n-1-i; j++)
		
			if(strcmp(kelime[j],kelime[j+1])>0){
				char *temp;
				temp =(char*)calloc(30,sizeof(char));
				strcpy(temp,kelime[j]);
				strcpy(kelime[j],kelime[j+1]);
				strcpy(kelime[j+1],temp);
			}
}

int main(){
	
	char **kelime;
	int i,j,n;
	
	printf("kac kelime siralanacak ?");
	scanf("%d\n",&n);
	
	kelime = (char**)calloc(n,sizeof(char*));
	for(i=0; i<n; i++){
		kelime[i]=(char*)calloc(30,sizeof(char));
		scanf("%s",kelime[i]);
	}
	
	sort(kelime,n);
	
	printf("siralandiktan sonra :");
	for(i=0; i<n; i++)
		printf("%s\n",kelime[i]);
}
