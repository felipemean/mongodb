#include<stdio.h>
#include<conio.h>

struct persona{
	char nombre[20]; //miembro
	int edad;
} persona1, persona2;

int main() {

	printf("\n\t 1. Teclea tu Nombre:\t"); gets(persona1.nombre);
		printf("\n\t 1. Teclea tu edad:\t"); scanf("%i", &persona1.edad);
		fflush(stdin);
	printf("\n\t 2. Teclea tu Nombre:\t"); gets(persona2.nombre);
		printf("\n\t 2. Teclea tu edad:\t"); scanf("%i", &persona2.edad);
	
	printf("\n\t Su nombre es: 	%s  y la edad es:	%i", persona1.nombre,persona1.edad);
	
		printf("\n\t Su nombre es: 	%s  y la edad es:	%i", persona2.nombre,persona2.edad);
	
	getch();
	return 0;
} 
