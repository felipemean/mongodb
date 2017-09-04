//Imprimir el alfabero en Mayusculas con punteros

#include<stdio.h>


int main(){
	char letra;
	char *p_letra = &letra;  // Posicion de letra
	
	for ( letra = 'A'; letra<='z'; letra++)	{
		printf("%c", *p_letra);
		}
	printf("\n");
		for ( letra = 'a'; letra<='z'; letra++)	{
		printf("%c", *p_letra);
		}
	return 0;
}
