// hacer variables , almacenar datos y posteriormente indicar la posicion de meoria
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int numero = 50;
	int *p_numero = &numero;  // dato;
	
	float decimal = 10.1;
	float *p_decimal = &decimal;  // dato
		// p_decimal ----> Posicion
	
//	char caracter  = 'a' ;
char caracter[20] ;
	char *p_caracter = &caracter; //dato
			// p_caracter  ---> Posicion
	fflush(stdin);
	printf("\n\nAlmacenar datos:	");
	
			fflush(stdin);
		printf("\n\nAlmacena un numero entero:	"); scanf("%i", &numero);
			printf("\n\nAlmacena un numero decimal:	"); scanf("%f", &decimal);
				fflush(stdin);
				printf("\n\nAlmacena una palabra:	"); gets(caracter);
		fflush(stdin);
	printf("\n\nLa posicion de memoria de cada dato:	");
	
	printf("\n\nLa posicion de memoria de el numero entero %i es :	%p", *p_numero, p_numero);
	
		printf("\n\nLa posicion de memoria de el numero decimal %.2f es :	%p", decimal, p_decimal);
			printf("\n\nLa posicion de memoria de la palabra '%s' es :	%p\n\n", caracter, p_caracter);
/*	
	p_numero = &numero ;  // posicion de memoria donde se esta guardando numero
	
	printf("Valor de la variable:\n");
	printf("Dato: %i\n", numero );
	printf("Dato: %i", *p_numero );
	
	printf("\n\nPosicion de memoria:\n");
	printf("Posicion:	%p\n", p_numero);
		printf("Posicion:	%p", &numero);
*/	
	system("pause");
	getch();
	return 0;
}
