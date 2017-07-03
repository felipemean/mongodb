//lista de 10 numeros, y buscar un numero y decir en que posicion esta
#include<stdio.h>
#include<conio.h>

int main(){
	int a[50] ;
	int i, dato, elementos;
	char band= 'F';
	
	//crear lista
	printf("\n  Teclea el numero de elementos de la lista para rellenar:   " ); scanf("%i", &elementos);
	
	for(i=0;i<elementos;i++){
		printf("\n Teclea el elemento %i de la lista:    ", i+1); scanf("%i", &a[i]);
	}
		printf("\n");
	
	printf("\n Teclea un numero:	"); scanf("%i", &dato);
	
	i=0;
	while((band=='F') &&(i<elementos)){
		if(a[i] ==dato ){
			band = 'V' ;
		}    
		i++;
	}
	if(band == 'F'){
		printf("  El numero no existe en la lista");
	} else if( band == 'V'){
		 printf("  El numero EXISTE en la lista, en la posicion  %i",  i);
	}
	
	
	getch();
	return 0;
}
