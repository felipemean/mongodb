#include<stdio.h>

int main(){
	int numero = 50;
	int *p_numero;
	
	p_numero = &numero ;  // posicion de memoria donde se esta guardando numero
	
	printf("Valor de la variable:\n");
	printf("Dato: %i\n", numero );
	printf("Dato: %i", *p_numero );
	
	printf("\n\nPosicion de memoria:\n");
	printf("Posicion:	%p\n", p_numero);
		printf("Posicion:	%p", &numero);
	
	
	return 0;
}
