#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p1;
	
	p1 = malloc(sizeof(int)); // reservo memoria para un numero entero
	
	if(p1 == NULL){
		printf("Memoria llena");
	}
	else {
		printf("Hay espacio de MEMORIA");
		*p1 = 15;
		
		printf("\n %i", *p1);
	}
	
	free(p1); // libera espacio;
		printf("\n %i", *p1);
	
	return 0;
}
