#include<stdio.h>
void inicio();
int main(){
	
	inicio();	

	
	return 0;
}

inicio(){
	
	char nombre[20];
	char signo[20];
	printf("Teclea tu nombre:	");
	gets(nombre);
	
	if( strcmp(nombre,"salir")==0 ){
		printf(" Saliendo del programa........");
		return 1;
	}else{
		printf("\nTeclea tu signo del zodiaco:  \n");
	gets(signo);
	}
		
	
	printf("Has tecleado  %s\n", signo);
	if ( strcmp(signo,"Aries")==0 ){
			printf("%s es del signo de Aries\n", nombre);
	}else{
			printf("%s no es del signo de Aries\n", nombre);
	}
	printf("\n");
	inicio();
	
}
