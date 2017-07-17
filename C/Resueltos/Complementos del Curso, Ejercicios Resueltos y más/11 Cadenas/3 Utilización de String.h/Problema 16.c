/*16. Pedir al usuario su nombre,apellido, y ciudad en la que vive, posteriormente
convertir todo a MAYUSCULAS e imprimir los datos.(Utilizar una estructura)*/

#include<stdio.h>
#include<string.h>

struct datos{
	char nombre[20];
	char apellidos[20];
	char ciudad[20];
}datos1;

int main(){
	printf("Digite su nombre: ");
	gets(datos1.nombre);
	printf("Digite sus apellidos: ");
	gets(datos1.apellidos);
	printf("Digite su ciudad: ");
	gets(datos1.ciudad);
	
	//Convirtiendo a MAYUSCULAS
	strupr(datos1.nombre);
	strupr(datos1.apellidos);
	strupr(datos1.ciudad);
	
	//Mostrando datos convertidos
	printf("\nSu nombre: %s",datos1.nombre);
	printf("\nSus apellidos: %s",datos1.apellidos);
	printf("\nSu ciudad: %s",datos1.ciudad);
	
	return 0;
}

