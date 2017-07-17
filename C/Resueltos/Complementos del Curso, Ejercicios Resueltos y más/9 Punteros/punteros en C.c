//Demostrar el uso basico de punteros

/*
	posiciones de memoria --
	punteros
*/
#include<stdio.h>

int main(){
	int numero = 40;
	int *p_numero = &numero;
	
	printf("Valor del numero\n");
	printf("%i",numero);
	printf("\n%i",*p_numero); //valor de lo que almacena numero

	printf("\n\nPosicion de Memoria\n");
	printf("%p",&numero);
	printf("\n%p",p_numero);
	
	
	return 0;
}

