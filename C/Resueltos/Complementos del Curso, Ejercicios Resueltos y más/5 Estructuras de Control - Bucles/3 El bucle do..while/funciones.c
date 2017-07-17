//Funciones en programacion en C
/*  Funciones sin retorno de valor            void;
		SALUDO POR PANTALLA
	Funcion con retorno de valor return VALOR; */
	#include<stdio.h>
	
	// PROTOTIPOS ,  indica que existe una determinada funcion
	void saludo();
	
	int main(){
		saludo();
		int a,b,suma=0;
		printf("\n\tDigita 2 numeros:\t"); scanf("%i %i", &a, &b);
		suma = sumar(a,b);
		
		printf("\n\tLa suma es: %i", suma);
		
		return 0;
	}
	
	
	void saludo(){
		printf("\n\tHOLA   que tal !!!!!!\n");
	}
	
	int sumar(int n1, int n2){// n1 y n2 son parametros
		int suma=0; //variable local
		suma= n1 +n2;
		return suma;
	}
