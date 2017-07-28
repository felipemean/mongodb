#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	char cad1[20], cad2[20];
	
	float valor1, valor2 ,multiplo=1;
	
	fflush(stdin);
	printf("\n\t Teclea 1 cadena numerica con decimales:	\n");
	gets(cad1);
	printf("\n\t Teclea 2 cadena numerica con decimales:	\n");
	gets(cad2);
	
	
	valor1 = atof(cad1);  //converti cadena a int
	valor2 = atof(cad2); 
	
	multiplo = valor1 * valor2;

	printf("\n\n El Multiplo de %.2f por %.2f es %.2f :	", valor1, valor2   , multiplo);

	 
	
	
	return 0;
}
