/*21. Convertir una cadena (por ejemplo: "1234"), a un número entero.
Con la función atoi().*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char *cad = "1234";
	int valor;
	
	valor = atoi(cad);
	
	printf("Valor numerico: %i",valor);
	
	
	
	return 0;
}


