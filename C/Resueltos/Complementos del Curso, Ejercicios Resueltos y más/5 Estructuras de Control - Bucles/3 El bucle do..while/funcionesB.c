//Funciones en programacion en C
/*  Funciones sin retorno de valor            void;
		SALUDO POR PANTALLA
	Funcion con retorno de valor return VALOR; */
	#include<stdio.h>
	
	// PROTOTIPOS ,  indica que existe una determinada funcion
	void saludo();
	void despedida();
		int sumar(int n1, int n2);
		int multiplicar(int n1, int n2);
	
	int main(){
		saludo();
		
		int a,b;
		printf("\n\tDigita 2 numeros:\t"); scanf("%i %i", &a, &b);
			
		printf("\n\tLa suma es: %i\n", sumar(a,b));
			printf("\n\tLa multiplicacion es: %i\n", multiplicar(a,b));
			
		despedida();
		
		return 0;
	}
	
void despedida(){
		printf("\n\t!!!!! ADIOS  CAP......    !!!!!!\n");
	}
	void saludo(){
		printf("\n\tHOLA   que tal !!!!!!\n");
	}
	
	int sumar(int n1, int n2){// n1 y n2 son parametros
		int suma=0; //variable local
		suma= n1 +n2;
		return suma;
	}
		int multiplicar(int n1, int n2){// n1 y n2 son parametros
		int multiplica=1; //variable local
		multiplica = n1  * n2;
		return multiplica;
	}
	
		
