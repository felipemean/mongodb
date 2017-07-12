// Lecturas de cadenas
#include<stdio.h>


int main(){
//	char nombre[20];
	
	char palabra[20];
	
//	printf(" Teclea Nombre:	"); scanf("%s", nombre);  // lee todo hasta 	que encuentra un espacio
	
	do{
		scanf("%s", palabra);
		
		if(!feof(stdin)){ // si no es final estoy leyendo y lo imprime
			printf("\n%s", palabra);
		}
		
		
	}while(!feof(stdin));
	
	
	
	
	
	
	
	
	
	// printf("\n El nombre es:	%s", nombre);
	
	return 0;
}
