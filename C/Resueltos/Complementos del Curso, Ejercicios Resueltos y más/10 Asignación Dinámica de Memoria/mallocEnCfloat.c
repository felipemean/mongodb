#include<stdio.h>
#include<stdlib.h>  //necesario para malloc

int main(){
	float *a;  // variable puntero y le reservo tamaño de memoria

	
	a = malloc(sizeof(float)); // tamaño de una variable entera.  Ya esta reservado.
	
	*a =5.45;
	
	printf("\n%.2f", *a);

	return 0;
}
