//---------- lista.h ----------- 
typedef struct ElementoLista
{
  char *dato;
  struct ElementoLista *siguiente;
} Elemento;

typedef struct ListaIdentificar
{
  Elemento *inicio;
  Elemento *fin;
  int tam;
} Lista;

/* ini de la lista */
void ini (Lista *lista);


/* INSERCION */

/* inserción en une lista vacía */
int ins_en_lista_vacia (Lista *lista, char *dato);

/* inserción al inicio de la lista */
int ins_inicio_lista (Lista *lista, char *dato);

/* inserción al final de la lista */
int ins_fin_lista (Lista *lista, Elemento *actual, char *dato);

/* inserción en otra parte */
int ins_lista (Lista *lista, char *dato, int pos);


/* SUPRESION */

int sup_inicio (Lista *lista);
int sup_en_lista (Lista *lista, int pos);


int menu (Lista *lista,int *k);
void muestra (Lista *lista);
void destruir ( Lista *lista);
/* -------- FIN lista.h --------- */
