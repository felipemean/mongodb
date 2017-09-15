// Crea una lista simplemente enlazada de 3 números flotantes, pidiéndole al usuario dichos números.
#include<stdio.h>
#include<stdlib.h> // usar NULL

typedef struct {  			// creo una structura llamada NODO
	float dato;				// dato
	struct Nodo *sgte ;		// puntero (( ES una structura anidada.
}Nodo;
							// Dos variables tipo Nodo
Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo){		// procedimiento Agragar, parametro tipo nodo
	nodo -> sgte = NULL;		
	if( primer == NULL){		// si la lista esta vacia
		primer = nodo;
		ultimo = nodo;
	}else{
		ultimo -> sgte = nodo;
		ultimo = nodo;
	}
}

int main(){
	float a,b,c;
	printf("\n Teclea tres numeros decimales para incluirlos en una lista enlazada:		\n");
	scanf(" %f %f %f", &a, &b,&c);
	Nodo *primerNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		primerNodo -> dato = a;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		segundoNodo -> dato = b;
		
	Nodo *tercerNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		tercerNodo -> dato = c;
	
	agregar(primerNodo);
		agregar(segundoNodo);
			agregar(tercerNodo);
	
	Nodo *i = primerNodo;
	while( i!= NULL){
		printf("\n %.2f", i -> dato);
		i = i-> sgte;
	}	
return 0;
}
