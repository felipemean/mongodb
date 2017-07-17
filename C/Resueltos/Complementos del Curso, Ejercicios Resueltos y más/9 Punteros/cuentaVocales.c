#include<stdio.h>
int cuenta( char *);
int cuente( char *);
int cuenti( char *);
int cuento( char *);
int cuentu( char *);
int main(){

	char cadena[60];
	
	printf("\n Teclea una frase:	");
	gets(cadena);
	
	printf("El numero de veces que esta la vocal 'a' es:	%i",cuenta(cadena));printf("\n");
	printf("El numero de veces que esta la vocal 'e' es:	%i",cuente(cadena));printf("\n");
	printf("El numero de veces que esta la vocal 'i' es:	%i",cuenti(cadena));printf("\n");
	printf("El numero de veces que esta la vocal 'o' es:	%i",cuento(cadena));printf("\n");
	printf("El numero de veces que esta la vocal 'u' es:	%i",cuentu(cadena));printf("\n");
	return 0;
}

int cuenta( char *s){
	int cont = 0;
	while(*s){
		switch(*s){
		case 'a': cont++ ;
		}
		s++;
	}
	return cont;
}
int cuente( char *s){
	int cont = 0;
	while(*s){
		switch(*s){
		case 'e': cont++ ;
		}
		s++;
	}
	return cont;
}
int cuenti( char *s){
	int cont = 0;
	while(*s){
		switch(*s){
		case 'i': cont++ ;
		}
		s++;
	}
	return cont;
}
int cuento( char *s){
	int cont = 0;
	while(*s){
		switch(*s){
		case 'o': cont++ ;
		}
		s++;
	}
	return cont;
}
int cuentu( char *s){
	int cont = 0;
	while(*s){
		switch(*s){
		case 'u': cont++ ;
		}
		s++;
	}
	return cont;
}

