/*22. Pedir dos cadenas numericas al usuario. Luego Convertirlas a numeros enteros.
Sumar los valor y entregar el resultado.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad1[5],cad2[5];
	int valor1,valor2,suma=0;
		
	printf("Digite el primer valor: ");
	gets(cad1);
	printf("Digite el segundo valor: ");
	gets(cad2);
	
	//Convirtiendo las cadenas a enteros
	valor1 = atoi(cad1);
	valor2 = atoi(cad2);
	
	suma = valor1 + valor2;
	
	printf("La suma es: %i",suma);	
	
	return 0;
}
