#include<stdio.h>
int main(){
	float cantidad, bono, interes, fijo= 0.6, beneficios=0.5;
	
	cantidad = 15872 ;
	bono = cantidad * 0.5 / 100  ;
	
	interes = cantidad * ( fijo +beneficios)/ 100  ;
	
	printf("\n La bonificacion es:    \t%.2f", bono);
	printf("\n El beneficio anual es: \t %.2f", interes);
	
	return 0;
	
} 
