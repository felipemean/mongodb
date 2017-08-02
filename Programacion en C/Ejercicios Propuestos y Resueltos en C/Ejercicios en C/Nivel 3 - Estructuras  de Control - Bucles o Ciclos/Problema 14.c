//14. Hacer un bucle do...while para imprimir las letras minusculas del alfabeto

#include<stdio.h>

int main(){
	char letra = 'a';
	
	do{
		printf("%c.\n",letra);
		letra++;		
	}while(letra <= 'z');

	return 0;
} 
