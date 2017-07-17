// Imprimir el alfabeto en mayusculas con punteros
#include<stdio.h>

int main(){
	char letra;
	int i;
	
	char *p_letra = &letra;  //posicio de la variable
	
	for(letra='A';letra<='Z'; letra++){
		printf("%c \t\n", *p_letra);
	}
	
	
	return 0;
}
