// hacer estructura corredor, nombre edad sexo y club.
// entre 18 juvenil,  <40 señor ,>40 Veterano
#include<stdio.h>
#include<stdlib.h>  // system pause   No espera hasta que tecleemos.
struct alumno{
	char nombre[20]; 
	int edad;
	int promedio;

}alumnos[3];

int main(){
	char categoria[20];
	fflush(stdin);
	printf("\n\t Teclea tu nombre:	"); gets(corredor1.nombre);
		printf("\n\t Teclea tu edad:	"); scanf("%i", &corredor1.edad);
			fflush(stdin);
			printf("\n\t Teclea tu sexo:	"); gets(corredor1.sexo);
				printf("\n\t Teclea tu club:	"); gets(corredor1.club);
	
	if(corredor1.edad <= 18){  //string copy strcpy
		strcpy(categoria, "Juvenil");  // categoria = Juvenil
	} else if(corredor1.edad <= 40){
		strcpy(categoria, "Segnor");  // categoria = Segnor
	} else{
		strcpy(categoria, "Veterano");  // categoria = Veterano
	}
	
	printf("\n\t Datos del Corredor:	\n");
	printf("\n\t Categoria:	%s", categoria);
		printf("\n\t Nombre:	%s", corredor1.nombre);
			printf("\n\t Edad:		%i", corredor1.edad);
				printf("\n\t Sexo:		%s", corredor1.sexo);
					printf("\n\t Club:		%s\n\n\t", corredor1.club);
	
	system("pause");
	return 0;
}
