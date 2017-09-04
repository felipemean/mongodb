// Crea una lista simplemente enlazada de 3 números flotantes, pidiéndole al usuario dichos números.
#include<stdio.h>
#include<stdlib.h> // usar NULL

typedef struct {  			// creo una structura llamada NODO
	char letra;				// dato
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
	char c1,c2,c3;
	printf("\n Teclea tres CARACTERES para incluirlos en una lista enlazada: ");
	scanf("%c %c %c", &c1, &c2,&c3);
	Nodo *primerNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		primerNodo -> letra = c1;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		segundoNodo -> letra = c2;
		
	Nodo *tercerNodo = malloc(sizeof(Nodo));  // REservo memoria dinamica para todo el nodo
		tercerNodo -> letra = c3;
	
	agregar(primerNodo);
		agregar(segundoNodo);
			agregar(tercerNodo);
	
	Nodo *i = primerNodo;
	while( i!= NULL){
			printf("%c\n",i->letra);
		i = i-> sgte;
	}	
return 0;
}
