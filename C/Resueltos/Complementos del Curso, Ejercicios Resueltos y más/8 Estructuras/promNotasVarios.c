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
}alumnos[100];

int main(){
	int i,n;
	float media[100];
	
	printf("\n\n\t Teclea el numero de Alumnos de la Clase:	"); scanf("%i", &n);
	for(i=0;i<n;i++){
	
	fflush(stdin);
	
	printf("\n%i Introduce el nombre del alumno:	", i+1); gets(alumnos[i].nombre);
	printf("\n%i Introduce el sexo del alumno:	", i+1); gets(alumnos[i].sexo);
	printf("\n%i Introduce la edad del alumno:	", i+1); scanf("%i",&alumnos[i].edad);
	/*
		printf("\n Introduce la primera nota del alumno:	");scanf("%f",&alumnos.prom.nota1);
		printf("\n Introduce la segunda nota del alumno:	");scanf("%f",&alumnos.prom.nota2);
		printf("\n Introduce la tercera nota del alumno:	");scanf("%f",&alumnos.prom.nota3);
	*/

	printf("\n\n Teclea las notas del alumno %i:	", i+1);
	scanf("%f %f %f", &alumnos[i].prom.nota1, &alumnos[i].prom.nota2, &alumnos[i].prom.nota3);
		}
	for(i=0;i<n;i++){
	media[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 +alumnos[i].prom.nota3) / 3 ;
	
	printf("\n\n");
	printf("\n%i Nombre del alumno:	%s", i+1, alumnos[i].nombre);
	printf("\n%i  Sexo del alumno:		%s",i+1, alumnos[i].sexo);
	printf("\n%i  Edad del alumno:		%i\n***************************************\n",i+1,alumnos[i].edad);
	
	printf("\n%i Nota1:	%.2f",i+1,alumnos[i].prom.nota1);
	printf("\n%i Nota2:	%.2f",i+1,alumnos[i].prom.nota2);
	printf("\n%i Nota3:	%.2f\n***************************************\n",i+1, alumnos[i].prom.nota3); 
	printf("\n\t%i Nota Media:	%.2f\n***************************************\n",i+1, media[i]);
	}
	
	
	system("pause");
	return 0;
}
