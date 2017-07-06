#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[100], *p_nombre;
	int longitud;
	
	printf("\n Teclea una cadena de caracteres:		"); gets(nombre);
	
	//strcpy(nombre,"Alejandro");
	
	longitud =  strlen(nombre);
	
	p_nombre = malloc((longitud+1)*sizeof(char));
	
	strcpy(p_nombre,nombre);
	
	printf("\n Nombre:	%s", p_nombre);
	
	free(p_nombre);
	
	printf("\n Nombre:	%s", p_nombre);
	
	
	return 0;
}
