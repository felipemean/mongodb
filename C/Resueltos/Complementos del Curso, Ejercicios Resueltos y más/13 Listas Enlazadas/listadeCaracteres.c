// Listas enlazadas ,  Secuencia  enlazadas por enlace o puntero
// NODO   dato1, p      :  Dato y puntero : Dato1 y puntero1 :   ultimo dato sin puntero
// Cuatro categorias,   simple, doble , circular y circular doblemente enlacada

// Operaciones :  Declaraciones y puntero ;  insertar ; eliminar ; buscar elementos ; Recorrer cada nodo ;comprorar lista vacia (puntero a null)

#include<stdio.h>
#include<stdlib.h>  // funcion NULL

typedef struct{    // Crear el NODO
	char caracter;
	struct Nodo *sgte;
}Nodo;

Nodo *primer = NULL ;
Nodo *ultimo = NULL ;

void agregar(Nodo *nodo){
	
	nodo -> sgte = NULL;
	
	if( primer == NULL){
		primer  = nodo;
		ultimo = nodo;
	}// 5 -> sgte -> 7
	else{
		ultimo -> sgte = nodo;
		ultimo = nodo;
	}
} 

int main(){
	char c1,c2,c3;
	printf("Teclea 3 caracteres:  ");
	scanf("%c %c %c",&c1,&c2,&c3);
			
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> caracter = c1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> caracter = c2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> caracter = c3;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	//REcorriendo la lista
	printf("\n\n");
	Nodo *i = primerNodo;
	while( i != NULL){
		printf("%c\n" , i -> caracter);
		i = i -> sgte;
	}
	
	return 0;
}


