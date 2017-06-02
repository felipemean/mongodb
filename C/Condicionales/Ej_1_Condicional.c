#include<stdio.h>
int main(){
	float examen;
	
	printf("\nDigita la nota  del examen:  \n"); scanf("%f", &examen);
	
	if( examen < 5 ){
		("El alumno NO esta aprobado\n");
	}else{
		if( examen >= 5 ){
		puts("El alumno esta aprobado\n");
	}
	}
	
	
	
	
	
	return 0;
}
