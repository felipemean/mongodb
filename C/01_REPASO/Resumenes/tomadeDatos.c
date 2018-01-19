#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

	struct persona{
		char nombre[20];
		int edad;
		char sexo[20];
	}personas[100];
	
int main(){
	int cuantos, i;
	printf("\n Toma de datos de un numero de personas ");
	printf("\nTeclea cuantas personas vas a registrar:: "); scanf("%i", &cuantos);
	
	system("color 4F");
	for(i=1; i<=cuantos; i++){
			printf("\n %i.-  Teclea nombre de la persona: ", i); scanf("%s", &personas[i].nombre);
		printf("\n %i.-  Teclea su sexo( masculino/femenino): ", i); scanf("%s", &personas[i].sexo);
	printf("\n %i.-  Teclea su edad: ", i); scanf("%i", &personas[i].edad);
	printf("\n");
	}
	system("cls");
	system("color 2F");
		printf("\n LISTADO DE PERSONAS:	\n_________________________\n\n");
	
	for(i=1; i<=cuantos; i++){	
		printf(" %i.- Nombre: %s\n", i, personas[i].nombre);
		printf(" %i.-   Seco: %s\n", i, personas[i].sexo);
		printf(" %i.-   Edad: %i\n",i, personas[i].edad);
		printf("\n");
	}
	
	// getch();  // libreria conio.h
	system("pause");
	return 0;
}
