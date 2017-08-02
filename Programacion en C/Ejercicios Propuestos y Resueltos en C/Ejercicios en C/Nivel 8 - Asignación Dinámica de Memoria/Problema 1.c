/*1. Utilizar malloc para reservar memoria para un nombre(string)*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char nombre[20], *p_nombre;
	int longitud;
	
	strcpy(nombre,"Alejandro");
	
	longitud = strlen(nombre); //determina el tamaño del nombre
	
	p_nombre = malloc((longitud+1)*sizeof(char));
	
	strcpy(p_nombre,nombre); //copiamos nombre a la nueva area de memoria p_nombre
	
	printf("Nombre: %s",p_nombre); //nombre esta ahora en p_nombre
	return 0;
}
