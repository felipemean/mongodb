//2. Convertir Grados Celsius a Grados Fahrenheit (Propuesto)

#include<stdio.h>

int main(){
	float grados_celsius,grados_f;
	
	printf("Digite los grados Celsius: ");
	scanf("%f",&grados_celsius);
	
	grados_f = grados_celsius * 1.8 +32;
	
	printf("\nEl equivalente en Grados Fahrenheit es: %f",grados_f);
	
	
	return 0;
}
