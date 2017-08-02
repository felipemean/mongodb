// Listas enlazadas ,  Secuencia  enlazadas por enlace o puntero
// NODO   dato1, p      :  Dato y puntero : Dato1 y puntero1 :   ultimo dato sin puntero
// Cuatro categorias,   simple, doble , circular y circular doblemente enlacada

// Operaciones :  Declaraciones y puntero ;  insertar ; eliminar ; buscar elementos ; Recorrer cada nodo ;comprorar lista vacia (puntero a null)

#include<stdio.h>
#include<stdlib.h>  // funcion NULL

typedef struct{    // Crear el NODO
	float numero;
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
	float n1,n2,n3;
	printf("Teclea 3 numeros decimales:  ");
	scanf("%f %f %f",&n1,&n2,&n3);
			
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> numero = n1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> numero = n2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> numero = n3;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	//REcorriendo la lista
	printf("\n\n");
	Nodo *i = primerNodo;
	while( i != NULL){
		printf("%.2f\n" , i -> numero);
		i = i -> sgte;
	}
	
	return 0;
}


