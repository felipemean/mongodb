/*10. Un alumno desea saber cuál será su calificación final en la materia de Algoritmos.
Dicha calificación se compone de los siguientes porcentajes:

• 55% del promedio de sus tres calificaciones parciales.
• 30% de la calificación del examen final.
• 15% de la calificación de un trabajo final. (Propuesto)*/

#include<stdio.h>

int main(){
	int p1,p2,p3,examen,trabajo,promedio_parcial;
	int p_parcial=0,p_examen=0,p_trabajo=0,calificacion=0;
	
	printf("Digite la nota de los 3 parciales: ");
	scanf("%i %i %i",&p1,&p2,&p3);
	
	printf("Digite la nota del examen final: ");
	scanf("%i",&examen);
	
	printf("Digite la nota del trabajo final: ");
	scanf("%i",&trabajo);
	
	promedio_parcial = (p1+p2+p3)/3;
	
	p_parcial = promedio_parcial*0.55;
	p_examen = examen *0.30;
	p_trabajo = trabajo * 0.15;
	
	calificacion = p_parcial + p_examen + p_trabajo;
	
	printf("La calificacion final es: %i",calificacion);
	
	
	return 0;
}
