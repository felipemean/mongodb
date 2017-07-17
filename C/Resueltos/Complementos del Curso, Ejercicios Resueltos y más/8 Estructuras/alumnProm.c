// Arrays en struct  ; Arreglo de estructuras
#include<stdio.h>

struct alumnos{
	char nombre[20];
	int edad;
	int promedio;	
} alumnos[3];

int main(){
	int i;
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("%i. Teclea tu nombre:	", i+1); gets(alumnos[i].nombre);
		printf("%i. Teclea tu edad:		", i+1);
		scanf("%i", &alumnos[i].edad);
		printf("%i. Teclea tu promedio:		", i+1);
		scanf("%i", &alumnos[i].promedio);
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		printf("\n%i. Su nombre es: %s", i+1,alumnos[i].nombre)	;
		printf("\n%i. Su edad es:	%i", i+1, alumnos[i].edad);
		printf("\n%i. Su promedio es:	%i", i+1, alumnos[i].promedio);
		printf("\n\n");
	}
	
	i=0;
		if(alumnos[i].promedio > alumnos[i+1].promedio){
			if(alumnos[i].promedio > alumnos[i+2].promedio){
				printf("\n\t ********************************************	");
				printf("\n\t El alumno con mejor promedio es:	");
					printf("\n%i. Su nombre es: %s", i+1,alumnos[i].nombre)	;
					printf("\n%i. Su edad es:	%i", i+1, alumnos[i].edad);
					printf("\n%i. Su promedio es:	%i", i+1, alumnos[i].promedio);
					printf("\n\n");
			}else{
				printf("\n\t ********************************************	");
				printf("\n\t El alumno con mejor promedio es:	");
					printf("\n%i. Su nombre es: %s", i+3,alumnos[i+2].nombre)	;
					printf("\n%i. Su edad es:	%i", i+3, alumnos[i+2].edad);
					printf("\n%i. Su promedio es:	%i", i+3, alumnos[i+2].promedio);
					printf("\n\n");
			}
		}else {
			if(alumnos[i+1].promedio > alumnos[i+2].promedio){
				printf("\n\t ********************************************	");
				printf("\n\t El alumno con mejor promedio es:	");
					printf("\n%i. Su nombre es: %s", i+2,alumnos[i+1].nombre)	;
					printf("\n%i. Su edad es:	%i", i+2, alumnos[i+1].edad);
					printf("\n%i. Su promedio es:	%i", i+2, alumnos[i+1].promedio);
					printf("\n\n");
			}else{
				printf("\n\t ********************************************	");
				printf("\n\t El alumno con mejor promedio es:	");
					printf("\n%i. Su nombre es: %s", i+3,alumnos[i+2].nombre)	;
					printf("\n%i. Su edad es:	%i", i+3, alumnos[i+2].edad);
					printf("\n%i. Su promedio es:	%i", i+3, alumnos[i+2].promedio);
					printf("\n\n");
			}
			
		}
	
	
	getch();
	return 0;
}
