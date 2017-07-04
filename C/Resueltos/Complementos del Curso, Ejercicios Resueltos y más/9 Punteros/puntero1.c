//PUNTEROS   Posiciones en memoria, nombre n, tipo int , posicion memeoria &n ("%p",&n) y que almacena "dato"
// Un puntero es una variable que contiene:  1. La direccion mem ( apunta al espacio fisico )
/*    int tasa = 100 ;
	int *p_tasa ;  VARIABLE de TIPO PUNTERO
	tipo *nombre_del_puntero;
	p_tasa = &tasa ; */
#include<stdio.h>

int main(){
	int numero = 70 ;
	
	printf("%i", numero);		// dato
	printf("\n%p", &numero);  // Posicion en memoria
	
	return 0;
}
