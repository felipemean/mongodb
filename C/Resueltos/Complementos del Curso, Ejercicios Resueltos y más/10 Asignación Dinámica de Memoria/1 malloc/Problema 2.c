/*2. Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc para
reservar memoria para esa cadena de caracteres (string)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char palabra[50], *p_palabra;
	int longitud;
	
	printf("Digite una cadena de caracteres: ");
	gets(palabra);
	
	longitud = strlen(palabra);
	
	p_palabra = malloc((longitud+1)*sizeof(char));
	
	strcpy(p_palabra,palabra);
	
	printf("String: %s",p_palabra);
	
	return 0;
}
