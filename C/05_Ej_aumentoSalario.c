/* Calcular el nuevo salario de un obreo si obtuvo un incremento del 25%
sobre su salario anterior */
#include<stdio.h>
#include <stdlib.h> 

int main(){
	float salario,aumento,nuevoSalario;
	
	printf("Introduce Salario anterior :  \n");
	scanf("%f",&salario);
	
	nuevoSalario = salario * 1.25 ;
	
	printf("Su nuevo salario con el aumento del 25 por ciento es de:   %.f",  nuevoSalario)	;
	
	system("pause"); 

	return 0;
}
