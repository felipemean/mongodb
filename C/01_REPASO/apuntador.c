#include<stdio.h>
#include<stdlib.h>
 

int main(){

	int numero, *p_numero ;
	
	printf("\n Teclea un numero:	\n"); scanf("%i", &numero);
	
	p_numero = &numero ;
	
	// posicion de memoria donde estan almacenados los datos
	
	if( *p_numero%2 == 0){
		printf("EL Puntero de numero %i es PAR: \n Su posicion de memoria es: %p",*p_numero,p_numero);
	}else{
		printf("EL Puntero de numero %i es IMPAR: \n Su posicion de memoria es: %p",*p_numero,p_numero);
	}
	
	return 0;
}
