// Arreglos de estructuras
#include<stdio.h>
#define TAM 10
struct alumno{
	char nombre[30];
	int edad ;
	int promedio;
}alumnos[TAM];


int main(){
	int i, num, promedio =0 , pos ;
	printf("\n Teclea el numero de alumos que vas a almacenar:	"); scanf("%i", &num);
 
 	// Introduce datos de los alumnos
	for(i=0;i<num;i++){
		fflush(stdin);  // vaciar el buffer
		printf("\n%i. Teclea nombre de la alumno %iª:\t", i+1,i+1);
		gets(alumnos[i].nombre);
			printf("\n%i. Teclea la edad de la alumno %iª:\t", i+1,i+1);
			scanf("%i", &alumnos[i].edad);
			printf("\n%i. Teclea el promedio de la alumno %iª:\t", i+1,i+1);
			scanf("%i", &alumnos[i].promedio);
		printf("\n");
	}	
	// imprime lista de alumnos
	printf("\n********Lista de Alumnos **************");
	for(i=0;i<num;i++){
		printf("\n%i. Nombre: %s y ",i+1, alumnos[i].nombre);
		 	printf(" Edad: %i", alumnos[i].edad);
		printf("\n");
	}
		// imprime datos del alumno con mejor promedio

/*   Metodo largo a lo basto
if( alumnos[0].promedio > alumnos[1].promedio){
		if( alumnos[0].promedio > alumnos[2].promedio){ 
		   printf("\n Nombre:  %s  , Edad: %i , Promedio: %i",alumnos[0].nombre, alumnos[0].edad, alumnos[0].promedio );
	}else {
		    printf("\n  Nombre:  %s  , Edad: %i , Promedio: %i",alumnos[2].nombre, alumnos[2].edad, alumnos[2].promedio );
	}
}else {
		if( alumnos[1].promedio > alumnos[2].promedio){ 
		    printf("\n  Nombre:  %s  , Edad: %i , Promedio: %i", alumnos[1].nombre, alumnos[1].edad, alumnos[1].promedio );
	}else { 
	        printf("\n   Nombre:  %s  , Edad: %i , Promedio: %i",alumnos[2].nombre, alumnos[2].edad, alumnos[2].promedio);
	}
}
*/
// metodo fino
for(i=0;i<num;i++){
	if(alumnos[i].promedio > promedio){
		promedio = alumnos[i].promedio;
		pos = i;
	}
}
	printf("\n******** El Alumno con mejor promedio es: %s \n **************",alumnos[pos].nombre );
	printf("\n ***********     El mejor promedio es:	%i     *****************+", promedio);
 printf("\n   Nombre:  %s  , Edad: %i , Promedio: %i",alumnos[pos].nombre, alumnos[pos].edad, alumnos[pos].promedio);
	
return 0;
}
