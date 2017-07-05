//memoria   espacio logico para guardar información por un periodo de tiempo
// M Estatica      se crea al declarar variables, no cambia en la ejecución , no se puede liberar manualmente
// arreglo:   se reservan bytes para todas las posiciones. Se desperdicia posiciones
// Dinamica:  Se reserva en tiempo de ejecución. El tamaño varia.  Ahorra memoria , solo utiliza lo que se usa.
// funcion malloc():  solicita un tamaño de memoria y devuelve un puntero tipo *puntero; puntero = malloc(tamaño en bytes)
// puntero = null  ===> No hay suficiente memoria;

#include<stdio.h>

int main(){
	int *p1;
	p1 = malloc( sizeof(int));
	
	char *c1;
	c1=malloc(sizeof(char));
	
}

