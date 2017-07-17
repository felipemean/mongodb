#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char cadena[100], *p_cadena;
	int longitud;
	
	printf("\n Teclea una cadena de caracteres:	\n\t");
	gets(cadena);
	
	longitud = strlen(cadena);
	printf("\n Longitud de la cadena:		%i", longitud);
	p_cadena = malloc((longitud+1) * sizeof(char));
	 
	strcpy(p_cadena,cadena);
	
		printf("\n\tString: %s",p_cadena);

	
	return 0;
}
