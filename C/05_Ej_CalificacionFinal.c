/*Un alumno desea saber cuál sera su calificacion final de la materia de Algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:
55 % del promedio de sus tres calificaciones parciales.
30 % de la calificación del examen final.
15% de la claificacion de un trabajo final  */

#include<stdio.h>
int main(){
	float 	notaFinal,calP1,calP2,calP3,promedio,examenFinal,trabajoFinal;
	printf("\n********************************************************\nCALIFICACION FINAL de la materia de ALGORITMOS\n");
	printf("\nIntroduce las 3 calificaciones parciales\n");
	scanf("%f %f %f ", &calP1, &calP2, &calP3);
	printf("\nIntroduce la calificación del examen Final\n");
	scanf("%f", &examenFinal  );
	printf("\nIntroduce la calificación del trabajo Final\n");
	scanf("%f", &trabajoFinal  );
	promedio = ( calP1 + calP2 + calP3  ) / 3 ; 
	notaFinal= 0.55 * promedio + 0.30 * examenFinal + 0.15 * trabajoFinal ;
	
	printf("Su Calificación final de la materia de Algoritmos es:   %.2f",notaFinal);
	return 0;
          }
