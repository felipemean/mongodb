// Cadenas
#include<stdio.h>
#include<string.h>


int  main(){
	char cad[100];
	int indice;
	
	printf("\n Introduce una cadena de maximo 10 caracteres:	\n");
	gets(cad);
	printf("\n La cadena tiene %i Caracteres", strlen(cad));
	printf("\n Comprueba los caracteres escritos segun su posicion, \n\n  Teclea el numero 100 para salir");
	
	while( indice != 10){
		if(indice== 100){
			printf("\n ADIOS, Hasta pronto!!" ); break;
		}else{
			
					printf("\n ¿Que caracter de la cadena quieres conocer? \n");
		printf("\nindica  el numero de orden del caracter en la cadena:	\n"); scanf("%i", &indice);
				printf("\n El caracter de la cadena que corresponde al indice %i es:	%c", indice, cad[indice]);	
		}

				
	}
	
	
	
	return 0;
}
