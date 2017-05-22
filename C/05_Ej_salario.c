/* Dadas las horas trabajadas de un apersona y el valor por hora
		Cálcula su salario e imprimelo    */
#include<stdio.h>

int main(){
	float precioHora,horasTrabajadas,salario;
	printf("\nCALCULO DEL SALARIO EN FUNCION DE LAS HORAS TRABAJADAS\n");
	printf("Introduce el precio hora: \n ");
	scanf("%f",&precioHora);
	
	
	printf("Introduce el numero de horas trabajadas en el mes:\n ");
	scanf("%f",&horasTrabajadas);
	
	salario = precioHora * horasTrabajadas;
	
	printf("El salario del mes son :  %.2f  Euros al mes",salario);
	
	
	return 0;
}
