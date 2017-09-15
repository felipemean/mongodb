// Listas enlazadas ,  Secuencia  enlazadas por enlace o puntero
// NODO   dato1, p      :  Dato y puntero : Dato1 y puntero1 :   ultimo dato sin puntero
// Cuatro categorias,   simple, doble , circular y circular doblemente enlacada

// Operaciones :  Declaraciones y puntero ;  insertar ; eliminar ; buscar elementos ; Recorrer cada nodo ;comprorar lista vacia (puntero a null)

#include<stdio.h>
#include<stdlib.h>  // funcion NULL

typedef struct{
	int dato;
	struct Nodo *sgte;
}Nodo;

Nodo *primer = NULL ;
Nodo *ultimo = NULL ;

void agregar(Nodo *nodo){
	
	nodo -> sgte = NULL;
	
	if( primer == NULL){
		primer  = nodo;
		ultimo = nodo;
	}
	else{
		ultimo -> sgte = nodo;
		ultimo = nodo;
	}
} 

int main(){
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> dato = 5;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> dato = 7;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> dato = 25;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	Nodo *i = primerNodo;
	while( i != NULL){
		printf("%i\n" , i -> dato);
		i = i -> sgte;
	}
	
	return 0;
}


