/*4. Hacer un Programa que calcule longitudes de Circunferencia. (Propuesto)*/
#include<stdio.h>
#define PI 3.1416

int main(){
	float radio,L;
	
	printf("Digite el valor del radio de la circunferencia: ");
	scanf("%f",&radio);
	
	L = PI * radio;
	
	printf("\nLa longitud de circunferencia es: %.2f",L);
	
	
	return 0;
}
