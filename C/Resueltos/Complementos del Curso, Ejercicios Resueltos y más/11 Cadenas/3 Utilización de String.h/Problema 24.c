/*24. Pedir dos cadenas(con numero flotante) al usuario, posteriormente multiplicar
dichos números y mostrar su resultado.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad1[5],cad2[5];
	float n1,n2,mult=0;
	
	printf("Digite la primera cadena(numero flotante): ");
	gets(cad1);
	printf("Digite la segunda cadena(numero flotante): ");
	gets(cad2);
	
	//Convirtiendo las cadenas a numeros flotantes
	n1 = atof(cad1);
	n2 = atof(cad2);
	
	mult = n1*n2;
	
	printf("\nEl resultado de la multiplicacion es: %.2f",mult);	
	
	
	return 0;
}
