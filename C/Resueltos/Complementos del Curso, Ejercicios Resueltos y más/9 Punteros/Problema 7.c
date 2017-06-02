/*7. Pedir su nombre al usuario y devolver el número de vocales que hay.*/

#include<stdio.h>

int cuentaVocales(char *);

int main(){
	char nombre[20];
	
	printf("Digite su nombre: ");
	gets(nombre);

	printf("Numero de vocales: %i",cuentaVocales(nombre));
	
	return 0;
}

int cuentaVocales(char *s){
	int cont = 0;
	while(*s){ //mientras que s no sea nulo \0
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':	cont++;
		}
		s++;
	} 
	
	return cont;
}
