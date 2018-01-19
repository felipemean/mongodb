#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

	struct alumno{
		char nombre[20];
		int edad;
		float promedio;
		 
	}alumnos[3];
	
int main(){
	int cuantos = 3 , i , mejorAlumno;
	float mejor=0;
	printf("\n Toma de datos de 3 alumnos: ");
	 
	system("color 4F");
	
	for(i=1; i<=cuantos; i++){
		fflush(stdin);
		printf("\n %i.-  Teclea nombre del alumno: ", i); gets(alumnos[i].nombre);
		
		printf("\n %i.-  Teclea su edad: ", i); scanf("%i", &alumnos[i].edad);
		
		printf("\n %i.-  Teclea su promedio : ", i); scanf("%f", &alumnos[i].promedio);
		printf("\n");
	}

	for(i=1; i<= cuantos; i++){
		if( alumnos[i].promedio > mejor ){
			mejor= alumnos[i].promedio ;
			mejorAlumno= i;
			printf("\n%i.-  %s ; promedio: %.2f\n", i, alumnos[i].nombre, alumnos[i].promedio );
		}	else{
				printf("\n%i.-  %s ; promedio: %.2f\n", i ,alumnos[i].nombre, alumnos[i].promedio );
		}
		
	}
	system("pause");
	system("cls");
	system("color 2F");
		printf("\n El Alumno con mejor promedio es:	\n_________________________________\n\n");
	
	printf(" %i.-   Nombre: %s\n", mejorAlumno, alumnos[mejorAlumno].nombre);
	printf(" %i.-     Edad: %i\n", mejorAlumno, alumnos[mejorAlumno].edad);
	printf(" %i.- Promedio: %.2f\n", mejorAlumno, alumnos[mejorAlumno].promedio);
	printf("\n");
	
	// getch();  // libreria conio.h
	system("pause");
	return 0;
}
