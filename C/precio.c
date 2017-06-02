#include<stdio.h>
int main(){
	float total, descuento, precio;
	printf("digital el precio total de la Compra \n");
	scanf("%f", &total);
	descuento = total * 0.15;
	
	precio = total - descuento;
		printf("el precio con el descuento del 15 porciento es : %.2f \n", precio);
	
	float horasTrabajadas, 	valorHora, salario, aumento, salarioFinal;
	printf("Cual es su salario, escribelo \n");
	scanf("%f", &salario);
	aumento = salario * 0.15 ;
	salarioFinal = salario + aumento;
		printf("Su salario final con aumento es :  %.f\n", salarioFinal);
	
	
	
	return 0;
}
