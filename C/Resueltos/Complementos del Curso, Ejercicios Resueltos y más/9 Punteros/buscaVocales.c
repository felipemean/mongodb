// encontrar vocales
#include<stdio.h>
int cuenta_vocales(char *);
int main(){
	char nombre[20]; 
	
	printf("\n Teclea tu nombre:	");
	gets(nombre);
	
	printf("El numero de vocales es:	%i",cuenta_vocales(nombre));
	
	return 0;
}

// alejandro     es s  ( \0  )  fin de string

int cuenta_vocales(char *s){ //parametro char que es un puntero
	int cont = 0;
	
	while(*s){  //mientras que s no sea nulo
		switch(*s){
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u': cont++;
		}
		s++;
	}
	return cont;
}
