#include<stdio.h>
#include<stdlib.h>

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumno1;

int main(){

	float media=0;
//	fflush(stdin);
	printf("\n Introduce el nombre del alumno:	"); gets(alumno1.nombre);
	printf("\n Introduce el sexo del alumno:	"); gets(alumno1.sexo);
	printf("\n Introduce la edad del alumno:	"); scanf("%i",&alumno1.edad);
	/*
		printf("\n Introduce la primera nota del alumno:	");scanf("%f",&alumno1.prom.nota1);
		printf("\n Introduce la segunda nota del alumno:	");scanf("%f",&alumno1.prom.nota2);
		printf("\n Introduce la tercera nota del alumno:	");scanf("%f",&alumno1.prom.nota3);
	*/
	
	printf("\n\n Teclea las notas:	");
	scanf("%f %f %f", &alumno1.prom.nota1, &alumno1.prom.nota2, &alumno1.prom.nota3);
	
	media = (alumno1.prom.nota1 + alumno1.prom.nota2 +alumno1.prom.nota3) / 3 ;
	
	printf("\n\n");
	printf("\n Nombre del alumno:	%s", alumno1.nombre);
	printf("\n Sexo del alumno:		%s", alumno1.sexo);
	printf("\n Edad del alumno:		%i\n***************************************\n",alumno1.edad);
	
	printf("\n Nota1:	%.2f",alumno1.prom.nota1);
	printf("\n Nota2:	%.2f",alumno1.prom.nota2);
	printf("\n Nota3:	%.2f\n***************************************\n", alumno1.prom.nota3); 
	printf("Nota Media:	%.2f\n***************************************\n", media);
	system("pause");
	return 0;
}
