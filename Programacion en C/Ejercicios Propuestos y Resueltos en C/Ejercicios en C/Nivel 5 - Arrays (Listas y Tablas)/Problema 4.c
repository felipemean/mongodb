/*4. Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres
cada uno dentro de su respectiva variable, y luego intercambiar el 
contenido de los arrays*/

#include<stdio.h>
#include<conio.h>
#define TAM 20

int main(){
	char aux[TAM],nombre1[TAM],nombre2[TAM];
	
	printf("Digite el nombre1: ");
	gets(nombre1);
	printf("Digite el nombre2: ");
	gets(nombre2);
	
	strcpy(aux,nombre1);
	strcpy(nombre1,nombre2);
	strcpy(nombre2,aux);
	
	printf("\nEl primer nombre es: %s",nombre2);
	printf("\nEl segundo nombre es: %s",nombre1);
	
	return 0;
}

