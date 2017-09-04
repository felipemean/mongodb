// lista enlazada, secuencia de elementos, uno detras de otro. Es dinamica
/*  Se enlazan por punteros:   Datos y puntero del siguiente dato
Dato1,p-> Dato2,p-> dato3,p->NULL   el ultimo puntero apunta a NULL
enlace o puntero   p
4 Categorias. 1. Enlazada, recorrido directo acaba con NULL
2. Doblemnete enlazada, recorrido en dos direcciones(  2 enlaces ), predecesor y antecesor
3. Lista cirular: bucle el ultimo enlaza con el primero
4.- Listas circular doblemente enlazada.
*/
#include<stdio.h>
#include<stdlib.h>  // se usa mucho null
// una lista o un nodo: Se crea con un typedef struct (){}Nodo;

typedef struct{
	int dato;						//dato
	struct Nodo *sgte;  			// Puntero, con una estrctuar anidada
}Nodo;

// voy a crear dos variables , la 1º posicion del nodo (inicialmente NULL) y lo mismo para la última.
Nodo *primer = NULL;  // se crea expresamente con null para evitar errores
Nodo *ultimo = NULL;

//  El parametro nodo implica que se crea un dato en la lista con ese valor=parametro
void agregar( Nodo *nodo){ // parametro de tipo nodo y agrego datos, Comprobar si está vacia

	nodo -> sgte = NULL;

	if( primer == NULL){     // la lista está vacia
		primer = nodo;			// ejmeplo parametro 5, si la lista esta vacia incluye el primer dato= 5
		ultimo = nodo;      	// Significa que el último = primero, y le asigno el mismo parametro	
	}else{       // La lista no está vacia al menos primer es != NULL
		ultimo -> sgte = nodo;   // Quiero agregar ,, ultmo tiene que apuntar a sgte
		ultimo = nodo;
	}
	
}
int main(){
	Nodo *primerNodo =  malloc(sizeof(Nodo));                            // reservo memoria dinamica
	primerNodo -> dato =5;
	
	Nodo *segundoNodo =  malloc(sizeof(Nodo));                            // reservo memoria dinamica
	segundoNodo -> dato =7;
	
	agregar(primerNodo);
	
		agregar(segundoNodo);
	
	Nodo *i = primerNodo;
	while(i!= NULL){
		printf("%i\n", i-> dato);
		i = i-> sgte;
	}
	
	return 0;
}

