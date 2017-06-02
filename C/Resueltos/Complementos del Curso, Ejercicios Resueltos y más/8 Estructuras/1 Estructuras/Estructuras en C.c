#include<stdio.h>

struct persona{
	char nombre[20];
	int edad;
}persona1,persona2;

int main(){	
	printf("Digite el nombre para Persona1: ");
	gets(persona1.nombre);
	printf("Digite la edad para Persona1: ");
	scanf("%i",&persona1.edad);
	fflush(stdin);
	printf("\nDigite el nombre para Persona2: ");
	gets(persona2.nombre);
	printf("Digite la edad para Persona2: ");
	scanf("%i",&persona2.edad);
	
	printf("\n\nSu nombre es: %s",persona1.nombre);
	printf("\nSu edad es: %i",persona1.edad);
	printf("\n\nSu nombre es: %s",persona2.nombre);
	printf("\nSu edad es: %i",persona2.edad);
	
	return 0;
}

