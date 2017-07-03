// 2 array, pedir el nombre guardar y pasar el contenido a otro array
#include<stdio.h>
#include<conio.h>
#define TAM 20

int main(){
	char nombre1[TAM], apellido[TAM],nombre2[TAM];
	
	printf("Teclea tu nombre , please:\t"); gets(nombre1);
	printf("Teclea tu apellido , please:\t"); gets(apellido);
	
	//nombre2 = nombre1  (FUNCION especial strcpy)  Copy strings
	
	strcpy(nombre2,nombre1);
	strcpy(nombre1,apellido);
	strcpy(apellido,nombre2);
	
	printf("\n\t Su nombre es :   %s", nombre1);
	printf("\n\t Su apellido es :   %s", apellido);
	
	
	return 0;
}
