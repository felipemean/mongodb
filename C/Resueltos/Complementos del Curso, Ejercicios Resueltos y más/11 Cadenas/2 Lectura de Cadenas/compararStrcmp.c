#include<stdio.h>
#include<string.h>

int main(){
	
	
	char palabra1[]= "Hola";
	char palabra2[]= "Hola Mundo";
	
	if(strcmp(palabra1,palabra2) == 0){
		
		printf("	Ambas palabras son iguales	");
	}else{
			printf("	Las palabras son DIFERENTES	");
	}
	
	
	return 0;
}
