#include<stdio.h>
#include<string.h>

int main(){
	
	
	char palabra1[60];
	char palabra2[60];
	
	printf("\t Teclea un nombre de usuario 1	:	"	);
	gets(palabra1);
	
	printf("\t Teclea un nombre de usuario 2	:	"	);
	gets(palabra2);
	
	
	
	if(strcmp(palabra1,palabra2) == 0){
		
		printf("\n	Los USUARIOS son iguales	");
	}else{
			printf("\n	LOS USUSARIOS son DIFERENTES	");
	}
	
	
	return 0;
}
