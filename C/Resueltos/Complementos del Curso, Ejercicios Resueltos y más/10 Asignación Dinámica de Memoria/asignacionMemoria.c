//memoria   espacio logico para guardar informaci�n por un periodo de tiempo
// M Estatica      se crea al declarar variables, no cambia en la ejecuci�n , no se puede liberar manualmente
// arreglo:   se reservan bytes para todas las posiciones. Se desperdicia posiciones
// Dinamica:  Se reserva en tiempo de ejecuci�n. El tama�o varia.  Ahorra memoria , solo utiliza lo que se usa.
// funcion malloc():  solicita un tama�o de memoria y devuelve un puntero tipo *puntero; puntero = malloc(tama�o en bytes)
// puntero = null  ===> No hay suficiente memoria;

#include<stdio.h>

int main(){
	int *p1;
	p1 = malloc( sizeof(int));
	
	char *c1;
	c1=malloc(sizeof(char));
	
}

