/* 	55% promedio de tres clalificaciones parciales
	30% calificacion examen final
	15% calificación trabajo final */
#include<stdio.h>

int main(){
	float p1, p2, p3, examenfinal, trabajofinal, calf;
	
	printf("\n    CALACULO DE LA CALIFICACION FINAL DEL CURSO   \n \n");
	
	printf(" Digite sus calificaciones : \n");
		printf(" Nota parcial 1\n");
		scanf("%f", &p1);
	
			printf(" Nota parcial 2 \n");
		scanf("%f", &p2);
	
			printf(" Nota parcial 3 \n");
		scanf("%f", &p3);
	
			printf(" Nota Examen Final \n");
		scanf("%f", &examenfinal);
	
			printf(" Nota trabajo final 1 \n");
		scanf("%f", &trabajofinal);
	
		calf = (0.55 * ( (p1 + p2 + p3) / 3)) + (0.30 * examenfinal) + ( 0.15 * trabajofinal);

		printf(" Su calificacion final del curso es: %.2f",  calf);
	
	return 0;
}

