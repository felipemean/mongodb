// Busqueda binaria             LISTAS ORDENADAS
#include<stdio.h>
#include<conio.h>

int main(){
	int a[5]= { 1,2,3,4,5};
	
	int inf,sup,mitad,dato;
	char band= 'F';
	
	dato=4;
	inf= 0, sup = 5;
	
	while(inf<=sup){
		mitad= (inf + sup )/2;
		if ( a[mitad]== dato){
			band= 'V';
			break;
		}
		if (a[mitad]>dato){
			sup=mitad;
			mitad = (inf+sup)/2;
		}
		if ( a[mitad] < dato){
			inf= mitad;
			mitad = (inf+sup)/2;
			
		}
	}
	
	if(band== 'F'){
		printf("EL numero NO existe");
	}else if(band == 'V'){
		printf("EL numero EXISTE en la posicion    %i ", mitad);
	}
	
	getch();
	return 0;
}

