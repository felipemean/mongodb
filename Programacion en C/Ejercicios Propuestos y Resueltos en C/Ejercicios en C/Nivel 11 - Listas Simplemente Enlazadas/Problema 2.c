/*2. Crea una lista simplemente enlazada de 3 caracteres, pidiendole al usuario
dichos caracteres.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char dato;
	struct Nodo *sgte;
}Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo){
	nodo -> sgte = NULL;

	if(primer == NULL){
		primer = nodo;
		ultimo = nodo;
	}
	else{
		ultimo -> sgte= nodo;
		ultimo = nodo;
	}
}

int main(){
	char c1,c2,c3;
	
	printf("Digite 3 caracteres: ");
	scanf("%c %c %c",&c1,&c2,&c3);
	
	Nodo *primerNodo = malloc(sizeof(Nodo));
	primerNodo -> dato = c1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo -> dato = c2;
	
	Nodo *tercerNodo = malloc(sizeof(Nodo));
	tercerNodo -> dato = c3;
	
	agregar(primerNodo);
	agregar(segundoNodo);
	agregar(tercerNodo);
	
	
	//Recorriendo Nodos
	Nodo *i = primerNodo;
	
	while(i != NULL){
		printf("%c\n",i->dato);
		i = i->sgte;
	}
	
	return 0;
}
