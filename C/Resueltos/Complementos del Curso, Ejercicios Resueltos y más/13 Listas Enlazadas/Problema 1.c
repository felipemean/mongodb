/*1. Crea una lista simplemente enlazada de 3 números flotantes, pidiendole al usuario
dichos números.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
	float numero;
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
	float n1,n2,n3;
	
	printf("Digite 3 numeros: ");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> numero = n1; 
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> numero = n2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> numero = n3;
	//Agregando Nodos
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	//Recorriendo Nodos
	Nodo *i = primerNodo;
	while(i != NULL){
		printf("%f\n",i->numero);
		i = i ->sgte;
	}
	
	return 0;
}
