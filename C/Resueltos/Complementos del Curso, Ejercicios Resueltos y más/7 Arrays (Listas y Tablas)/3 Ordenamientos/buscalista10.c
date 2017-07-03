//lista de 10 numeros, y buscar un numero y decir en que posicion esta
#include<stdio.h>
#include<conio.h>

int main(){
	int a[10] = { 3,6,7,1,4,10,9,2,11,12};
	int i, dato;
	char band= 'F';
	printf("\n Teclea un numero:	"); scanf("%i", &dato);
	
	i=0;
	while((band=='F') &&(i<10)){
		if(a[i] ==dato ){
			band = 'V' ;
		}    
		i++;
	}
	if(band == 'F'){
		printf("  El numero no existe en la lista");
	} else if( band == 'V'){
		 printf("  El numero EXISTE en la lista, en la posicion  %i",  i-1);
	}
	
	
	getch();
	return 0;
}
