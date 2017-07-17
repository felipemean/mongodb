#include<stdio.h>
#include<stdlib.h>  //necesario para malloc

int main(){
	int *a;  // variable puntero y le reservo tamaño de memoria
	
	a = malloc(sizeof(int)); // tamaño de una variable entera.  Ya esta reservado.
	
	*a =5;
	printf("\n%i", *a);

	
	return 0;
}
