#include<stdio.h>
#include<stdlib.h>  //necesario para malloc

int main(){
	float *a;  // variable puntero y le reservo tama�o de memoria

	
	a = malloc(sizeof(float)); // tama�o de una variable entera.  Ya esta reservado.
	
	*a =5.45;
	
	printf("\n%.2f", *a);
	printf("\n Tama�o: %i", a);
	
	return 0;
}
