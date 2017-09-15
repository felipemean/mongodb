#include<stdio.h>
int main(){
	int numero;
	
	printf(" Teclea un numero NATURAL o el 9 para Salir del programa:	\n\t");
	scanf("%i", &numero);
	
		while( numero != 9)	{
	{if ( numero >=0 ){
		printf("\n\t El numero %i  es POSITIVO   ", numero );
	}else{
		printf("\n\t El numero %i  es NEGATIVO   ", numero );
		
	}

		printf("\n\n\t Teclea un numero NATURAL \n\t         o \n\t el 9 para Salir del programa:	\n");
	scanf("%i", &numero);
	
	
	}
	}

	
	printf("\n\n\tFIN DEL PROGRAMA");
	
	
	return 0;
}
