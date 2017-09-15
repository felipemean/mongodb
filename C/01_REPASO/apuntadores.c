#include<stdio.h>

int main(){
	int n;
	int tasa=100;
	int *p_tasa;      // almacena donde va almacenar la direccion a la variabla
	p_tasa= &tasa;
	n= 50;
	int *p_numero;
	
	p_numero = &n;
	
	
	printf("\n valor de n:	%i", n);
	printf("\n direccion del puntero n:	%p", &n);
		printf("\n direccion del puntero n:	%p", &n);
	printf("\n\n");
		printf("\n direccion del puntero n:	%p", p_numero);
			printf("\n Dato n:	%i", *p_numero);
		
	printf("\n");

	printf("\n valor de tasa:	%i", tasa);
	printf("\n direccion del punteroa a n: %i", &tasa);	
		printf("\n direccion del punteroa a n: %p", p_tasa);	
	
	return 0;
}
