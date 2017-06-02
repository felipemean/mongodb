//Lista Simplemente Enlazada

#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int dato;
	struct Nodo *sgte;		
}Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo){
	nodo -> sgte=NULL;
	
	if(primer == NULL){ //comprobamos si la lista esta vacia
		primer = nodo;
		ultimo = nodo;
	}
	else{
		ultimo -> sgte = nodo;
		ultimo = nodo;	
	}	
}

int main(){
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> dato = 10; 
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> dato = 15;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> dato = 20;
	//Agregando Nodos
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	//Recorriendo Nodos
	Nodo *i = primerNodo;
	while(i != NULL){
		printf("%i\n",i->dato);
		i = i ->sgte;
	}
	
	return 0;
}
