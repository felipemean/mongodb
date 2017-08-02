/*5. Hacer un programa que pida por pantalla una temperatura en grados Celsius, 
muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por 
pantalla, utilizar funciones. 

Celsius a Fahrenheit:
	F = (9*C)/5 + 32;
	
Celsius a Kelvin:
	K = C + 273.15
*/

#include<stdio.h>
float fahrenheit(float C);
float kelvin(float C);

int main(){
	float C=0,F=0,K=0;
	int opc;
	
	do{
		printf("\nDigite los grados Celsius: ");
		scanf("%f",&C);
	
	printf("\n1. Transformar a Grados Fahrenheit");
	printf("\n2. Transformar a Grados Kelvin");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opc);
	
	switch(opc){
		case 1: F = fahrenheit(C);
				printf("\nEl equivalente en Fahrenheit es: %.2f\n",F);break;
		case 2: K = kelvin(C);
				printf("\nEl equivalente en Kelvin es: %.2f\n",K);break;
	}
	
	}while(opc!= 3);
	
	
	return 0; 
}

float fahrenheit(float C){
	float F=0;
	F = (9*C)/5 + 32;
	return F;
}

float kelvin(float C){
	float K=0;
	K = C + 273.15;
	return K;	
}

