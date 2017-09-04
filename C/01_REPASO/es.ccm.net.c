//listas enlazadas
#include<stdio.h>
#include<stdlib.h>

typedef struct ElementoLista{
	char *dato;
	struct ElementoLista * sgte;
}Elemento;

typedef struct ListaI{
	Elemento *inicio;
	Elemento *fin;
	int tam;
}Lista;

void iniciar (Lista *lista);
int ins_en_lista_vacia (Lista *lista, char *dato);
int ins_inicio_lista (Lista *lista,char *dato);

int main(){
	
	return 0;
}

void iniciar (Lista *lista){
	lista -> inicio = NULL;
	lista -> fin = NULL;
	tam = 0;
}
/* inserción en una lista vacía */
int ins_en_lista_vacia (Lista *lista, char *dato){
  Element *nuevo_elemento;
  if ((nuevo_elemento = (Element *) malloc (sizeof (Element))) == NULL)
    return -1;
  if ((nuevo _elemento->dato = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (nuevo_elemento->dato, dato);

  nuevo_elemento->sgte = NULL;
  lista->inicio = nuevo_elemento;
  lista->fin = nuevo_elemento;
  lista->tam++;
  return 0;
}
/* inserción al inicio de la lista */
int ins_inicio_lista (Lista *lista, char *dato){
  Element *nuevo_elemento;
  if ((nuevo_elemento = (Element *) malloc (sizeof (Element))) == NULL)
    return -1;
  if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (nuevo_elemento->dato, dato);

  nuevo_elemento->sgte = lista->inicio
  lista->inicio = nuevo_elemento;
  lista->tam++;
  return 0;
}
/*inserción al final de la lista */
int ins_fin_lista (Lista *lista, Element *actual, char *dato){
  Element *nuevo_elemento;
  if ((nuevo_elemento = (Element *) malloc (sizeof (Element))) == NULL)
    return -1;
  if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (nuevo_elemento->dato, dato);

  actual->sgte = nuevo_elemento;
  nuevo_elemento->sgte = NULL;

  lista->fin = nuevo_elemento;
  lista->tam++;
  return 0;
}
