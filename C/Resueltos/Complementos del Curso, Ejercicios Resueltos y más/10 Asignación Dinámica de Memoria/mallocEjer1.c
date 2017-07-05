#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[20], *p_nombre;
	int longitud;
	
	strcpy(nombre,"Alejandro"); // alejandro\0
	
	longitud = strlen(nombre);  // tu nombre tiene tantos espacion
	printf("\n Longitud de nombre: 	%i", longitud);
	
	p_nombre = malloc((longitud+1)*sizeof(char));	// reservo por el espacio exacto que voy a utilizar
	
	strcpy(p_nombre,nombre);
	
	printf("\n Nombre:	%s", p_nombre);
	
	
	return 0;
}
