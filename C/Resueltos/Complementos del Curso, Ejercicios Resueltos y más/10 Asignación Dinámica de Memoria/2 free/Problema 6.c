/*6. Pedir al usuario una cadena de caracteres, reservar memoria con malloc(), 
almacenarlo en la memoria dinámica, posteriormente utilizar free() para liberar el 
espacio de memoria dinámica utilizado.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char palabra[50],*p_palabra;
	int longitud;
	
	printf("Digite una palabra (String): ");
	gets(palabra);
	
	longitud = strlen(palabra);
	
	p_palabra = malloc((longitud+1)*sizeof(char));
	
	strcpy(p_palabra,palabra);
	
	printf("Palabra: %s",p_palabra);
	
	free(p_palabra); //Liberamos el espacio de memoria dinamica
	
	//Comprobando que se libero es espacio
	printf("\nPalabra: %s",p_palabra);	
	
	return 0;
}
