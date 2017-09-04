#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct corredores{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[10];
}corredor;

int main(){
 
	printf("\n Teclea los datos de tu corredor");
	printf("\n Nombre:	"); gets(corredor.nombre);
		printf("\n Edad:	");scanf("%i", &corredor.edad);
	fflush(stdin);
	printf("\n Sexo:	"); gets(corredor.sexo);
	printf("\n Club:	"); gets(corredor.club);
	

	
	if(corredor.edad <= 18){
		printf("\n %s de %i años, es %s y pertenece al club %s y es:		CATERGORIA JUVENIL",corredor.nombre,corredor.edad,corredor.sexo,corredor.club );
	}else if(corredor.edad <= 40){
		printf("\n %s de %i años, es %s y pertenece al club %s y  es:		CATERGORIA Señor",corredor.nombre,corredor.edad,corredor.sexo,corredor.club );
	}else{
	printf("\n %s  de %i años, es %s y pertenece al club %s y  es:		CATERGORIA Veterano",corredor.nombre,corredor.edad,corredor.sexo,corredor.club );

	}
	system("pause");
	return 0;
}
