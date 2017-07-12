// bloque 11 de Cadenas, es un CHAR y termina con un fin de cadena '\0'
// cad = "ABC"              ===>  ABC\0
/*
printf("%c", cad[0]);   // imprime A
/*
printf("%c", cad[4]);    // \0
*/


/*
printf("%c", *cad);   imprime A
printf("%c", *(cad+3);   imprime \0
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	char cad[] = "ABC" ;
	
	printf("\n%c", cad[0]);
	printf("\n%c", cad[3]);
	printf("AHORA con PUNTEROS:");
		printf("\n%c", *cad);
			printf("\n%c", *(cad+1));
				printf("\n%c", *(cad+2));
	printf("\n%c", *(cad+3));
	
	
	return 0;
}
