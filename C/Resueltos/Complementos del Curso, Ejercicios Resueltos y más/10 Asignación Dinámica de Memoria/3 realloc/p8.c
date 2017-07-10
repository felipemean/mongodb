//p8  Reservar mem para arreglo de 5 numeros. rellenar por teclado, ampliar arreglo a 10 y añadir 5 numeros e IMPRIMIR
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int *p_array , *p_array2;
	
	int i;
	
	p_array = malloc( sizeof(int) * 5);
	for(i=0;i<5;i++){
		printf("\%i. Teclea un numero:	", i+1); scanf("%i", &p_array[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n%i. Numero:	%i", i+1 , p_array[i]);
	}
	
	p_array2 = realloc(p_array, 10 * sizeof(int));
	
	printf("\n\t Agregar 5 numeros mas:	");
	
	for(i=5;i<10;i++){
		printf("\%i. Teclea un numero:	", i+1); scanf("%i", &p_array[i]);
	}
	
	for(i=0;i<10;i++){
		printf("\n%i. Numero:	%i", i+1 , p_array[i]);
	}
	
	
	free(p_array2);
	return 0;
}
