/*5. Reservar espacio en memoria dinámica para un nombre, y luego liberar la memoria
utilizada con free().*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nombre[20],*p_nombre;
	int longitud;
	
	strcpy(nombre,"Alejandro");
	
	longitud = strlen(nombre);
	
	p_nombre = malloc((longitud+1)*sizeof(char));
	
	strcpy(p_nombre,nombre); 
	
	printf("Nombre: %s",p_nombre);
	
	free(p_nombre);
	
	printf("\nNombre: %s",p_nombre);
	
	return 0;
} 
