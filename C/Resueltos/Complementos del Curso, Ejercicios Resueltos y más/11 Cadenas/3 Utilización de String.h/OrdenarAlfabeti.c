#include<stdio.h>
#include<string.h>

int main(){
	char palabra1[20], palabra2[20];
	
	printf("\n	Teclea la primera palabra:\n");
	gets(palabra1);
	printf("\n	Teclea la segunda palabra:\n");
	gets(palabra2);
	
	
	if(strcmp(palabra1,palabra2)>0){ // palabra 1 es mayor luego va detras alfabeticamente
		printf("%s  %s", palabra2, palabra1);
	}else{
		printf("%s  %s", palabra1, palabra2);
	}
	
	
		
	return 0;
}
